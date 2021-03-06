#include "sum_denoise2d_opt.h"

#define INPUT_SIZE (18*18)
#define OUTPUT_SIZE (16*16)

extern "C" {

static void read_input(int* input, hls::stream<hw_uint<32> >& v, const int size) {
  for (int i = 0; i < INPUT_SIZE; i++) {
    #pragma HLS pipeline II=1
    v.write(input[i]);
  }
}

static void write_output(int* output, hls::stream<hw_uint<32> >& v, const int size) {
  for (int i = 0; i < OUTPUT_SIZE; i++) {
    #pragma HLS pipeline II=1
    output[i] = v.read();
  }
}

void sum_denoise2d_opt_accel(int* f_update_0_read_arg, int* u_update_0_read_arg, int* sum_denoise2d_update_0_write_arg, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = f_update_0_read offset = slave bundle = gmem
#pragma HLS INTERFACE m_axi port = u_update_0_read offset = slave bundle = gmem
#pragma HLS INTERFACE m_axi port = sum_denoise2d_update_0_write offset = slave bundle = gmem

#pragma HLS INTERFACE s_axilite port = f_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = u_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = sum_denoise2d_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static hls::stream<hw_uint<32> > f_off_chip;
  static hls::stream<hw_uint<32> > u_off_chip;
  static hls::stream<hw_uint<32> > sum_denoise2d;

  read_input(f_off_chip_arg, f_off_chip, size);
  read_input(u_off_chip_arg, u_off_chip, size);

  sum_denoise2d_opt(f_off_chip, u_off_chip, sum_denoise2d);

  write_output(sum_denoise2d_arg, sum_denoise2d, size);
}

}
