#pragma once

#include "conv_3x3.h"

  // f_update_0 unroll factor: 1
hw_uint<32>  id_unrolled_1(hw_uint<32>& f_off_chip) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_f_off_chip;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_f_off_chip, f_off_chip.extract<0, 31>());
  auto result_0 = id(lane_0_f_off_chip);
  set_at<0, 32>(whole_result, result_0);
  return whole_result;
}

  // sum_float_update_0 unroll factor: 1
hw_uint<32>  fadd2_unrolled_1(hw_uint<32>& f, hw_uint<32>& u) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_f;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_f, f.extract<0, 31>());
  hw_uint<32> lane_0_u;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_u, u.extract<0, 31>());
  auto result_0 = fadd2(lane_0_f, lane_0_u);
  set_at<0, 32>(whole_result, result_0);
  return whole_result;
}
