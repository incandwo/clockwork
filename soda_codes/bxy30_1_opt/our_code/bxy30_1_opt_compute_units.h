#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> input_generated_compute(hw_uint<16*1> input_arg) {
  return input_arg.get<16, 0>();
}

hw_uint<16> blurx_generated_compute(hw_uint<16*3> input) {
  return (((input.get<16, 0>() + input.get<16, 1>()) + input.get<16, 2>()) / hw_uint<16>(3));
}

hw_uint<16> bxy30_1_generated_compute(hw_uint<16*3> blurx) {
  return (((blurx.get<16, 0>() + blurx.get<16, 1>()) + blurx.get<16, 2>()) / hw_uint<16>(3));
}



// Compute unit banks...
  // input_update_0 unroll factor: 1
hw_uint<16>  input_generated_compute_unrolled_1(hw_uint<16>& input_arg) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_input_arg;
  set_at<0, 16, 16>(lane_0_input_arg, input_arg.extract<0, 15>());
  auto result_0 = input_generated_compute(lane_0_input_arg);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // blurx_update_0 unroll factor: 1
hw_uint<16>  blurx_generated_compute_unrolled_1(hw_uint<48>& input) {
  hw_uint<16> whole_result;

  hw_uint<48> lane_0_input;
  set_at<0, 48, 48>(lane_0_input, input.extract<0, 47>());
  auto result_0 = blurx_generated_compute(lane_0_input);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // bxy30_1_update_0 unroll factor: 1
hw_uint<16>  bxy30_1_generated_compute_unrolled_1(hw_uint<48>& blurx) {
  hw_uint<16> whole_result;

  hw_uint<48> lane_0_blurx;
  set_at<0, 48, 48>(lane_0_blurx, blurx.extract<0, 47>());
  auto result_0 = bxy30_1_generated_compute(lane_0_blurx);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

