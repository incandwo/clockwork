#include "ap_int.h"

extern "C" {

void mp23_4_opt_kernel(ap_uint<64>* mp23_4, ap_uint<128>* in_oc, uint64_t coalesced_data_num);
}
