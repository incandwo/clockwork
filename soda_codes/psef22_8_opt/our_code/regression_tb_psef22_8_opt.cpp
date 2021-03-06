#include <fstream>
#include "psef22_8_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_psef22_8_opt.txt");
  ofstream fout("regression_result_psef22_8_opt.txt");
  HWStream<hw_uint<128> > in_update_0_read;
  HWStream<hw_uint<128> > psef22_8_update_0_write;


  // Loading input data
  // cmap    : { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : 0 <= in_0 <= 159 and 0 <= in_1 <= 1262 }
  // read map: { in_off_chip[0, 0] -> in_update_0[root = 0, in_0, in_1] : 0 <= in_0 <= 159 and 0 <= in_1 <= 1262 }
  // rng     : { in_update_0[root = 0, in_0, in_1] : 0 <= in_0 <= 159 and 0 <= in_1 <= 1262 }
  for (int i = 0; i < 202080; i++) {
    hw_uint<128> in_val;
    set_at<0*16, 128, 16>(in_val, 8*i + 0);
    in_pix << in_val << endl;
    set_at<1*16, 128, 16>(in_val, 8*i + 1);
    in_pix << in_val << endl;
    set_at<2*16, 128, 16>(in_val, 8*i + 2);
    in_pix << in_val << endl;
    set_at<3*16, 128, 16>(in_val, 8*i + 3);
    in_pix << in_val << endl;
    set_at<4*16, 128, 16>(in_val, 8*i + 4);
    in_pix << in_val << endl;
    set_at<5*16, 128, 16>(in_val, 8*i + 5);
    in_pix << in_val << endl;
    set_at<6*16, 128, 16>(in_val, 8*i + 6);
    in_pix << in_val << endl;
    set_at<7*16, 128, 16>(in_val, 8*i + 7);
    in_pix << in_val << endl;
    in_update_0_read.write(in_val);
  }

  psef22_8_opt(in_update_0_read, psef22_8_update_0_write);

  for (int i = 0; i < 196250; i++) {
    hw_uint<128> actual = psef22_8_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*16, 15>();
    fout << actual_lane_0 << endl;
    auto actual_lane_1 = actual.extract<1*16, 31>();
    fout << actual_lane_1 << endl;
    auto actual_lane_2 = actual.extract<2*16, 47>();
    fout << actual_lane_2 << endl;
    auto actual_lane_3 = actual.extract<3*16, 63>();
    fout << actual_lane_3 << endl;
    auto actual_lane_4 = actual.extract<4*16, 79>();
    fout << actual_lane_4 << endl;
    auto actual_lane_5 = actual.extract<5*16, 95>();
    fout << actual_lane_5 << endl;
    auto actual_lane_6 = actual.extract<6*16, 111>();
    fout << actual_lane_6 << endl;
    auto actual_lane_7 = actual.extract<7*16, 127>();
    fout << actual_lane_7 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
