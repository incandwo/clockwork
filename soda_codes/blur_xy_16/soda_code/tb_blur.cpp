#include "blur.h"

#include <iostream>
#include <fstream>

#define BURST_WIDTH 256

using namespace std;

int main() {

  const int nrows = 33;
  const int ncols = 64;

  uint64_t img_pixels=
    nrows*ncols;

  const uint64_t bits_per_pixel = 32;
  uint64_t img_bits =
    bits_per_pixel*img_pixels;

  const uint64_t num_transfers =
    img_bits / BURST_WIDTH;

  cout << "num transfers: " << num_transfers << endl;

  const uint64_t transfer_cols = ncols / (BURST_WIDTH / bits_per_pixel);

  ap_uint<512>* y_res =
    (ap_uint<512>*) malloc(sizeof(ap_uint<512>) * num_transfers);
  ap_uint<512>* input =
    (ap_uint<512>*) malloc(sizeof(ap_uint<512>) * num_transfers);

  for (int r = 0; r < nrows; r++) {
    for (int c = 0; c < transfer_cols; c++) {

      //cout << "r = " << r << ", c = " << c << endl;
      auto offset = r*transfer_cols + c;
      //cout << "offset = " << offset << endl;

      ap_uint<512>* val = &(input[offset]);
      for (int l = 0; l < (BURST_WIDTH / bits_per_pixel); l++) {
        (*val)(l*bits_per_pixel + bits_per_pixel - 1, l*bits_per_pixel) = r*ncols + c + l;
      }
    }
  }

  blur_kernel(y_res,
      input,
      num_transfers);

  cout << "Results..." << endl;
  ofstream out("soda_blur_xy_unrolled_opt_16.csv");
  for (int r = 0; r < nrows; r++) {
    for (int c = 0; c < transfer_cols; c++) {

      //cout << "r = " << r << ", c = " << c << endl;
      auto offset = r*transfer_cols + c;
      //cout << "offset = " << offset << endl;

      ap_uint<512>* val = &(y_res[offset]);
      for (int l = 0; l < (BURST_WIDTH / bits_per_pixel); l++) {
        out << (*val)(l*bits_per_pixel + bits_per_pixel - 1, l*bits_per_pixel) << endl;
      }

    }
    //cout << endl;
  }
  out.close();
  cout << "Done" << endl;

}