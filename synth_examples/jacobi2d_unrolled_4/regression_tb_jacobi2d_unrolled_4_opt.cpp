#include <fstream>
#include "jacobi2d_unrolled_4_opt.h"

int main() {
  ofstream fout("regression_result_jacobi2d_unrolled_4_opt.txt");
  HWStream<hw_uint<128> > t1_update_0_read;
  HWStream<hw_uint<128> > jacobi2d_unrolled_4_update_0_write;


  // Loading input data
  // cmap    : { t1_update_0[root = 0, t1_0, t1_1] -> t1_arg[0, 0] : -1 <= t1_0 <= 480 and -1 <= t1_1 <= 1080 }
  // read map: { t1_arg[0, 0] -> t1_update_0[root = 0, t1_0, t1_1] : -1 <= t1_0 <= 480 and -1 <= t1_1 <= 1080 }
  // rng     : { t1_update_0[root = 0, t1_0, t1_1] : -1 <= t1_0 <= 480 and -1 <= t1_1 <= 1080 }
  for (int i = 0; i < 521524; i++) {
    hw_uint<128> in_val;
    set_at<0*32, 128>(in_val, 4*i + 0);
    set_at<1*32, 128>(in_val, 4*i + 1);
    set_at<2*32, 128>(in_val, 4*i + 2);
    set_at<3*32, 128>(in_val, 4*i + 3);
    t1_update_0_read.write(in_val);
  }

  jacobi2d_unrolled_4_opt(t1_update_0_read, jacobi2d_unrolled_4_update_0_write);

  for (int i = 0; i < 518400; i++) {
    hw_uint<128> actual = jacobi2d_unrolled_4_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*32, 31>();
    fout << (int) actual_lane_0 << endl;
    auto actual_lane_1 = actual.extract<1*32, 63>();
    fout << (int) actual_lane_1 << endl;
    auto actual_lane_2 = actual.extract<2*32, 95>();
    fout << (int) actual_lane_2 << endl;
    auto actual_lane_3 = actual.extract<3*32, 127>();
    fout << (int) actual_lane_3 << endl;
  }

  return 0;
}