#include "ap_int.h"

extern "C" {

void blur_xy_16_unrolled_2_opt_kernel(ap_uint<16>* blur_xy_16_unrolled_2, ap_uint<16>* input_arg, uint64_t coalesced_data_num);
}
