#include "ap_int.h"

extern "C" {

void psef23_16_opt_kernel(ap_uint<256>* psef23_16, ap_uint<256>* in_off_chip, uint64_t coalesced_data_num);
}
