#include "xcl2.hpp"
#include <algorithm>
#include <fstream>
#include <vector>

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " <XCLBIN File>" << std::endl;
    return EXIT_FAILURE;
  }
  std::string binaryFile = argv[1];
  const int in_update_0_read_DATA_SIZE = 1595169;
  const int in_update_0_read_BYTES_PER_PIXEL = 32 / 8;
  size_t in_update_0_read_size_bytes = in_update_0_read_BYTES_PER_PIXEL * in_update_0_read_DATA_SIZE;

  const int pyramid_synthetic_exposure_fusion_update_0_write_DATA_SIZE = 1595169;
  const int pyramid_synthetic_exposure_fusion_update_0_write_BYTES_PER_PIXEL = 32 / 8;
  size_t pyramid_synthetic_exposure_fusion_update_0_write_size_bytes = pyramid_synthetic_exposure_fusion_update_0_write_BYTES_PER_PIXEL * pyramid_synthetic_exposure_fusion_update_0_write_DATA_SIZE;


  cl_int err;
  cl::Context context;
  cl::Kernel krnl_vector_add;
  cl::CommandQueue q;

  std::vector<uint8_t, aligned_allocator<uint8_t> > in_update_0_read(in_update_0_read_size_bytes);
  std::vector<uint8_t, aligned_allocator<uint8_t> > pyramid_synthetic_exposure_fusion_update_0_write(pyramid_synthetic_exposure_fusion_update_0_write_size_bytes);

  std::ofstream input_in_update_0_read("in_update_0_read.csv");
  for (int i = 0; i < in_update_0_read_DATA_SIZE; i++) {
    // TODO: Add support for other widths
    uint16_t val = (i % 256);
    input_in_update_0_read << val << std::endl;
    ((uint16_t*) (in_update_0_read.data()))[i] = val;
  }

  input_in_update_0_read.close();
  for (int i = 0; i < pyramid_synthetic_exposure_fusion_update_0_write_DATA_SIZE; i++) {
    // TODO: Add support for other widths
    ((uint16_t*) (pyramid_synthetic_exposure_fusion_update_0_write.data()))[i] = 0;
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
      OCL_CHECK(err, krnl_vector_add = cl::Kernel(program, "pyramid_synthetic_exposure_fusion_opt_accel", &err));
      valid_device++;
      break;
    }
  }
  if (valid_device == 0) {
    std::cout << "Failed to program any device found, exit!\n";
    exit(EXIT_FAILURE);
  }

  OCL_CHECK(err, cl::Buffer pyramid_synthetic_exposure_fusion_update_0_write_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, pyramid_synthetic_exposure_fusion_update_0_write_size_bytes, pyramid_synthetic_exposure_fusion_update_0_write.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(0, pyramid_synthetic_exposure_fusion_update_0_write_ocl_buf));

  OCL_CHECK(err, cl::Buffer in_update_0_read_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_WRITE_ONLY, in_update_0_read_size_bytes, in_update_0_read.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(1, in_update_0_read_ocl_buf));

  int transfer_size = 1595169 / 1;
  OCL_CHECK(err, err = krnl_vector_add.setArg(2, transfer_size));

  OCL_CHECK(err, err = q.enqueueMigrateMemObjects({in_update_0_read_ocl_buf}, 0));

  OCL_CHECK(err, err = q.enqueueTask(krnl_vector_add));

  OCL_CHECK(err, err = q.enqueueMigrateMemObjects({pyramid_synthetic_exposure_fusion_update_0_write_ocl_buf}, CL_MIGRATE_MEM_OBJECT_HOST));

  q.finish();

  std::ofstream regression_result("pyramid_synthetic_exposure_fusion_update_0_write_accel_result.csv");
  for (int i = 0; i < pyramid_synthetic_exposure_fusion_update_0_write_DATA_SIZE; i++) {
    regression_result << ((uint16_t*) (pyramid_synthetic_exposure_fusion_update_0_write.data()))[i] << std::endl;;
  }

  return 0;
}
