#include <fstream>
#include "denoise2d_unrolled_1_opt.h"

int main() {
  ofstream fout("regression_result_denoise2d_opt.txt");
  HWStream<hw_uint<32> > f_comp_read;
  HWStream<hw_uint<32> > u_comp_read;
  HWStream<hw_uint<32> > denoise2d_comp_write;


  // Loading input data
  // cmap    : { f_comp[root = 0, f_0, f_1] -> f_off_chip[0, 0] : 0 <= f_0 <= 33 and 0 <= f_1 <= 33 }
  // read map: { f_off_chip[0, 0] -> f_comp[root = 0, f_0, f_1] : 0 <= f_0 <= 33 and 0 <= f_1 <= 33 }
  // rng     : { f_comp[root = 0, f_0, f_1] : 0 <= f_0 <= 33 and 0 <= f_1 <= 33 }
  for (int i = 0; i < 1156; i++) {
    hw_uint<32> in_val;
    set_at<0*32, 32>(in_val, 1*i + 0);
    f_comp_read.write(in_val);
  }

  // cmap    : { u_comp[root = 0, u_0, u_1] -> u_off_chip[0, 0] : -2 <= u_0 <= 31 and -2 <= u_1 <= 31 }
  // read map: { u_off_chip[0, 0] -> u_comp[root = 0, u_0, u_1] : -2 <= u_0 <= 31 and -2 <= u_1 <= 31 }
  // rng     : { u_comp[root = 0, u_0, u_1] : -2 <= u_0 <= 31 and -2 <= u_1 <= 31 }
  for (int i = 0; i < 1156; i++) {
    hw_uint<32> in_val;
    set_at<0*32, 32>(in_val, 1*i + 0);
    u_comp_read.write(in_val);
  }

  denoise2d_unrolled_1_opt(f_comp_read, u_comp_read, denoise2d_comp_write);

  for (int i = 0; i < 900; i++) {
    hw_uint<32> actual = denoise2d_comp_write.read();
    auto actual_lane_0 = actual.extract<0*32, 31>();
    fout << (int) actual_lane_0 << endl;
  }

  return 0;
}
