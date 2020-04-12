#include "pyramid_synthetic_exposure_fusion_opt.h"

#define INPUT_SIZE (18*18)
#define OUTPUT_SIZE (16*16)

extern "C" {

static void read_input(int* input, hls::stream<hw_uint<32> >& v, const int size) {
  for (int i = 0; i < INPUT_SIZE; i++) {
    v.write(input[i]);
  }
}

static void write_output(int* output, hls::stream<hw_uint<32> >& v, const int size) {
  for (int i = 0; i < OUTPUT_SIZE; i++) {
    output[i] = v.read();
  }
}

void pyramid_synthetic_exposure_fusion_opt_accel(int* in_update_0_read_arg, int* pyramid_synthetic_exposure_fusion_update_0_write_arg, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read offset = slave bundle = gmem
#pragma HLS INTERFACE m_axi port = pyramid_synthetic_exposure_fusion_update_0_write offset = slave bundle = gmem

#pragma HLS INTERFACE s_axilite port = in_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = pyramid_synthetic_exposure_fusion_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static hls::stream<int> in_off_chip;
  static hls::stream<int> pyramid_synthetic_exposure_fusion;

  read_input(in_off_chip_arg, in_off_chip, size);

  pyramid_synthetic_exposure_fusion_opt(in_off_chip, pyramid_synthetic_exposure_fusion);

  write_output(pyramid_synthetic_exposure_fusion_arg, pyramid_synthetic_exposure_fusion, size);
}

}