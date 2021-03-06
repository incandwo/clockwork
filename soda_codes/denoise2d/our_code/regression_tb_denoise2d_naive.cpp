#include <fstream>
#include "denoise2d_naive.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_denoise2d_naive.txt");
  ofstream fout("regression_result_denoise2d_naive.txt");
  HWStream<hw_uint<32> > f_update_0_read;
  HWStream<hw_uint<32> > u_update_0_read;
  HWStream<hw_uint<32> > denoise2d_update_0_write;


  // Loading input data
  // cmap    : { f_update_0[root = 0, f_0, f_1] -> f_off_chip[0, 0] : 0 <= f_0 <= 29 and 0 <= f_1 <= 29 }
  // read map: { f_off_chip[0, 0] -> f_update_0[root = 0, f_0, f_1] : 0 <= f_0 <= 29 and 0 <= f_1 <= 29 }
  // rng     : { f_update_0[root = 0, f_0, f_1] : 0 <= f_0 <= 29 and 0 <= f_1 <= 29 }
  for (int i = 0; i < 900; i++) {
    hw_uint<32> in_val;
    set_at<0*32, 32, 32>(in_val, 1*i + 0);
    in_pix << in_val << endl;
    f_update_0_read.write(in_val);
  }

  // cmap    : { u_update_0[root = 0, u_0, u_1] -> u_off_chip[0, 0] : -2 <= u_0 <= 31 and -2 <= u_1 <= 31 }
  // read map: { u_off_chip[0, 0] -> u_update_0[root = 0, u_0, u_1] : -2 <= u_0 <= 31 and -2 <= u_1 <= 31 }
  // rng     : { u_update_0[root = 0, u_0, u_1] : -2 <= u_0 <= 31 and -2 <= u_1 <= 31 }
  for (int i = 0; i < 1156; i++) {
    hw_uint<32> in_val;
    set_at<0*32, 32, 32>(in_val, 1*i + 0);
    in_pix << in_val << endl;
    u_update_0_read.write(in_val);
  }

  denoise2d_naive(f_update_0_read, u_update_0_read, denoise2d_update_0_write);

  for (int i = 0; i < 900; i++) {
    hw_uint<32> actual = denoise2d_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*32, 31>();
    fout << actual_lane_0 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
