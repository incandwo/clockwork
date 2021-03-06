#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "mp23_1_opt_compute_units.h"

#include "hw_classes.h"

struct in_in_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[0, 127], [0, 127], [0, 63]}
	// Capacity: 130
	// # of read delays: 4
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 126> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_127() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_128() {
		return f4;
	}

	inline hw_uint<32>  peek_129() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 126
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 126 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_cache {
  in_in_update_0_write0_merged_banks_4_cache in_in_update_0_write0_merged_banks_4;
};



inline void in_in_update_0_write0_write(hw_uint<32> & in_in_update_0_write0, in_cache& in, int d0, int d1, int d2) {
  in.in_in_update_0_write0_merged_banks_4.push(in_in_update_0_write0);
}

inline hw_uint<32>  mp23_1_rd0_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp23_1_rd0 read pattern: { mp23_1_update_0[d0, d1, d2] -> in[2d0, 2d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp23_1_update_0[d0, d1, d2] -> [d2, 1 + 2d1, 1 + 2d0, 2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  // DD fold: { mp23_1_update_0[d0, d1, d2] -> 129 : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_129();
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  mp23_1_rd1_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp23_1_rd1 read pattern: { mp23_1_update_0[d0, d1, d2] -> in[2d0, 1 + 2d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp23_1_update_0[d0, d1, d2] -> [d2, 1 + 2d1, 1 + 2d0, 2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  // DD fold: { mp23_1_update_0[d0, d1, d2] -> 1 : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_1();
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  mp23_1_rd2_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp23_1_rd2 read pattern: { mp23_1_update_0[d0, d1, d2] -> in[1 + 2d0, 2d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp23_1_update_0[d0, d1, d2] -> [d2, 1 + 2d1, 1 + 2d0, 2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  // DD fold: { mp23_1_update_0[d0, d1, d2] -> 128 : 0 <= d0 <= 62 and 0 <= d1 <= 63 and 0 <= d2 <= 63; mp23_1_update_0[d0, d1, d2] -> (2 + 2 * d0) : d0 = 63 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_128();
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  mp23_1_rd3_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp23_1_rd3 read pattern: { mp23_1_update_0[d0, d1, d2] -> in[1 + 2d0, 1 + 2d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp23_1_update_0[d0, d1, d2] -> [d2, 1 + 2d1, 1 + 2d0, 2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  // DD fold: {  }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_0();
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// in_update_0_write
//	in_in_update_0_write0
inline void in_in_update_0_write_bundle_write(hw_uint<32>& in_update_0_write, in_cache& in, int d0, int d1, int d2) {
	hw_uint<32>  in_in_update_0_write0_res = in_update_0_write.extract<0, 31>();
	in_in_update_0_write0_write(in_in_update_0_write0_res, in, d0, d1, d2);
}

// mp23_1_update_0_read
//	mp23_1_rd0
//	mp23_1_rd1
//	mp23_1_rd2
//	mp23_1_rd3
inline hw_uint<128> in_mp23_1_update_0_read_bundle_read(in_cache& in, int d0, int d1, int d2) {
  // # of ports in bundle: 4
    // mp23_1_rd0
    // mp23_1_rd1
    // mp23_1_rd2
    // mp23_1_rd3

	hw_uint<128> result;
	hw_uint<32>  mp23_1_rd0_res = mp23_1_rd0_select(in, d0, d1, d2);
	set_at<0, 128>(result, mp23_1_rd0_res);
	hw_uint<32>  mp23_1_rd1_res = mp23_1_rd1_select(in, d0, d1, d2);
	set_at<32, 128>(result, mp23_1_rd1_res);
	hw_uint<32>  mp23_1_rd2_res = mp23_1_rd2_select(in, d0, d1, d2);
	set_at<64, 128>(result, mp23_1_rd2_res);
	hw_uint<32>  mp23_1_rd3_res = mp23_1_rd3_select(in, d0, d1, d2);
	set_at<96, 128>(result, mp23_1_rd3_res);
	return result;
}



// Operation logic
inline void in_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_oc, in_cache& in, int d0, int d1, int d2) {
	// Consume: in_oc
	auto in_oc_0_c__0_value = in_oc.read();
	auto compute_result = id_unrolled_1(in_oc_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(compute_result, in, d0, d1, d2);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void mp23_1_update_0(in_cache& in, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */mp23_1, int d0, int d1, int d2) {
	// Consume: in
	auto in_0_c__0_value = in_mp23_1_update_0_read_bundle_read(in/* source_delay */, d0, d1, d2);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = max_pool_2x2_unrolled_1(in_0_c__0_value);
	// Produce: mp23_1
	mp23_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void mp23_1_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */in_oc, HWStream<hw_uint<32> >& /* get_args num ports = 1 */mp23_1, int num_epochs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("mp23_1_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

  for (int epoch = 0; epoch < num_epochs; epoch++) {
	  // Schedules...
	    // in_oc_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // mp23_1_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*2 + 1*1,1*d0*1*2 + 1*1,1*2]
	for (int c0 = 0; c0 <= 63; c0++) {
	  for (int c1 = 0; c1 <= 127; c1++) {
	    for (int c2 = 0; c2 <= 127; c2++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	      if ((0 <= c2 && c2 <= 127) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 127) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
	in_update_0(in_oc, in, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((1 <= c2 && c2 <= 127) && ((c2 - 1) % 2 == 0) && (1 <= c1 && c1 <= 127) && ((c1 - 1) % 2 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
	mp23_1_update_0(in, mp23_1, (c2 - 1) / 2, (c1 - 1) / 2, (c0 - 0) / 1);
	      }
	
	    }
	  }
	}
	
  }

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void mp23_1_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */in_oc, HWStream<hw_uint<32> >& /* get_args num ports = 1 */mp23_1) {

  mp23_1_opt(in_oc, mp23_1, 1);
}
#ifdef __VIVADO_SYNTH__
#include "mp23_1_opt.h"

const int in_update_0_read_num_transfers = 1048576;
const int mp23_1_update_0_write_num_transfers = 262144;


extern "C" {

static void read_in_update_0_read(hw_uint<32>* input, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  int num_transfers = in_update_0_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_mp23_1_update_0_write(hw_uint<32>* output, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  int num_transfers = mp23_1_update_0_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void mp23_1_opt_accel(hw_uint<32>* in_update_0_read, hw_uint<32>* mp23_1_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = mp23_1_update_0_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = mp23_1_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<32> > in_update_0_read_channel;
  static HWStream<hw_uint<32> > mp23_1_update_0_write_channel;

  read_in_update_0_read(in_update_0_read, in_update_0_read_channel, size);

  mp23_1_opt(in_update_0_read_channel, mp23_1_update_0_write_channel, size);

  write_mp23_1_update_0_write(mp23_1_update_0_write, mp23_1_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

