// AUTO GEN SODA TB
#include "sblr30_2_opt_kernel.h"
#include <iostream>
#include <fstream>

#define PIXEL_WIDTH 16
#define BURST_WIDTH 32

#include "runtime/test_utils.h"

using namespace std;

int main() {
  srand(234);
  const int nrows = 30*1082;
  const int ncols = 1924;
  uint64_t img_pixels = nrows*ncols;
  const uint64_t bits_per_pixel = PIXEL_WIDTH;
  uint64_t img_bits = bits_per_pixel*img_pixels;
  const uint64_t num_transfers = img_bits / BURST_WIDTH;
  const uint64_t pixels_per_burst = BURST_WIDTH / bits_per_pixel;

  cout << "num transfers    : " << num_transfers << endl;
  cout << "pixels / transfer: " << pixels_per_burst << endl;

  const uint64_t transfer_cols = ncols / pixels_per_burst;
  ap_uint<BURST_WIDTH>* sblr30_2 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  ap_uint<BURST_WIDTH>* off_chip_img = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("off_chip_img_input_pixel.csv", off_chip_img, nrows, ncols, transfer_cols);
  sblr30_2_opt_kernel(sblr30_2, off_chip_img, num_transfers);
  write_results_decimal<bits_per_pixel>("soda_sblr30_2_opt_regression_result.csv", sblr30_2, nrows, ncols, transfer_cols);
  free(off_chip_img);
  free(sblr30_2);
}
