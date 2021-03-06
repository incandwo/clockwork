#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // img_update_0 unroll factor: 1
hw_uint<32>  id_unrolled_1(hw_uint<32>& off_chip_img) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_off_chip_img;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_off_chip_img, off_chip_img.extract<0, 31>());
  auto result_0 = id(lane_0_off_chip_img);
  set_at<0, 32>(whole_result, result_0);
  return whole_result;
}

  // mag_y_update_0 unroll factor: 1
hw_uint<32>  sobel_my_unrolled_1(hw_uint<192>& img) {
  hw_uint<32> whole_result;
  hw_uint<192> lane_0_img;
  // Need offset: -1, -1
  set_at<0, 192>(lane_0_img, img.extract<0, 31>());
  // Need offset: -1, 1
  set_at<32, 192>(lane_0_img, img.extract<32, 63>());
  // Need offset: 0, -1
  set_at<64, 192>(lane_0_img, img.extract<64, 95>());
  // Need offset: 0, 1
  set_at<96, 192>(lane_0_img, img.extract<96, 127>());
  // Need offset: 1, -1
  set_at<128, 192>(lane_0_img, img.extract<128, 159>());
  // Need offset: 1, 1
  set_at<160, 192>(lane_0_img, img.extract<160, 191>());
  auto result_0 = sobel_my(lane_0_img);
  set_at<0, 32>(whole_result, result_0);
  return whole_result;
}

  // mag_x_update_0 unroll factor: 1
hw_uint<32>  sobel_mx_unrolled_1(hw_uint<192>& img) {
  hw_uint<32> whole_result;
  hw_uint<192> lane_0_img;
  // Need offset: -1, -1
  set_at<0, 192>(lane_0_img, img.extract<0, 31>());
  // Need offset: -1, 0
  set_at<32, 192>(lane_0_img, img.extract<32, 63>());
  // Need offset: -1, 1
  set_at<64, 192>(lane_0_img, img.extract<64, 95>());
  // Need offset: 1, -1
  set_at<96, 192>(lane_0_img, img.extract<96, 127>());
  // Need offset: 1, 0
  set_at<128, 192>(lane_0_img, img.extract<128, 159>());
  // Need offset: 1, 1
  set_at<160, 192>(lane_0_img, img.extract<160, 191>());
  auto result_0 = sobel_mx(lane_0_img);
  set_at<0, 32>(whole_result, result_0);
  return whole_result;
}

  // sobel_unrolled_1_update_0 unroll factor: 1
hw_uint<32>  mag_cu_unrolled_1(hw_uint<32>& mag_x, hw_uint<32>& mag_y) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_mag_x;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_mag_x, mag_x.extract<0, 31>());
  hw_uint<32> lane_0_mag_y;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_mag_y, mag_y.extract<0, 31>());
  auto result_0 = mag_cu(lane_0_mag_x, lane_0_mag_y);
  set_at<0, 32>(whole_result, result_0);
  return whole_result;
}

