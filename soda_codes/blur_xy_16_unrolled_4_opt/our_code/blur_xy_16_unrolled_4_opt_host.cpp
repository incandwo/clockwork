#include "xcl2.hpp"
#include <algorithm>
#include <fstream>
#include <vector>

int main(int argc, char **argv) {
  if (argc != 5) {
    std::cout << "Usage: " << argv[0] << " <XCLBIN File> <Kernel Name> <input size> <output size>" << std::endl;
    return EXIT_FAILURE;
  }
  std::string binaryFile = argv[1];
  const int DATA_SIZE = 4096;
  const int OUT_DATA_SIZE = 4096;

  size_t vector_size_bytes = sizeof(int) * DATA_SIZE;
  cl_int err;
  cl::Context context;
  cl::Kernel krnl_vector_add;
  cl::CommandQueue q;

  std::vector<int, aligned_allocator<int>> blur_xy_16_unrolled_4_update_0_write(DATA_SIZE);
  std::vector<int, aligned_allocator<int>> input_update_0_read(DATA_SIZE);
  for (int i = 0; i < DATA_SIZE; i++) {
    blur_xy_16_unrolled_4_update_0_write[i] = 0;
    input_update_0_read[i] = 0;
  }

  auto devices = xcl::get_xil_devices();
  auto fileBuf = xcl::read_binary_file(binaryFile);
  cl::Program::Binaries bins{{fileBuf.data(), fileBuf.size()}};
  int valid_device = 0;
  for (unsigned int i = 0; i < devices.size(); i++) {
    auto device = devices[i];
    OCL_CHECK(err, context = cl::Context({device}, NULL, NULL, NULL, &err));
    OCL_CHECK(err,
      q = cl::CommandQueue(
      context, {device}, CL_QUEUE_PROFILING_ENABLE, &err));

    std::cout << "Trying to program device[" << i
      << "]: " << device.getInfo<CL_DEVICE_NAME>() << std::endl;
    OCL_CHECK(err, cl::Program program(context, {device}, bins, NULL, &err));
    if (err != CL_SUCCESS) {
      std::cout << "Failed to program device[" << i
      << "] with xclbin file!\n";
    } else {
      std::cout << "Device[" << i << "]: program successful!\n";
      OCL_CHECK(err, krnl_vector_add = cl::Kernel(program, "blur_xy_16_unrolled_4_opt_accel", &err));
      valid_device++;
      break;
    }
  }
  if (valid_device == 0) {
    std::cout << "Failed to program any device found, exit!\n";
    exit(EXIT_FAILURE);
  }

  OCL_CHECK(err, cl::Buffer input_update_0_read_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_WRITE_ONLY, vector_size_bytes, input_update_0_read.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(0, input_update_0_read_ocl_buf));
  OCL_CHECK(err, cl::Buffer blur_xy_16_unrolled_4_update_0_write_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, vector_size_bytes, blur_xy_16_unrolled_4_update_0_write.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(1, blur_xy_16_unrolled_4_update_0_write_ocl_buf));
  int size = DATA_SIZE;
  OCL_CHECK(err, err = krnl_vector_add.setArg(2, size));
  OCL_CHECK(err, err = q.enqueueMigrateMemObjects({input_update_0_read_ocl_buf}, 0));
  OCL_CHECK(err, err = q.enqueueTask(krnl_vector_add));
  OCL_CHECK(err, err = q.enqueueMigrateMemObjects({blur_xy_16_unrolled_4_update_0_write_ocl_buf}, CL_MIGRATE_MEM_OBJECT_HOST));

  q.finish();

  std::ofstream regression_result("blur_xy_16_unrolled_4_update_0_write_accel_result.csv");
  for (int i = 0; i < OUT_DATA_SIZE; i++) {
    regression_result << blur_xy_16_unrolled_4_update_0_write[i] << std::endl;
  }

  return 0;
}
