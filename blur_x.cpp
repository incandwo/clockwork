#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "conv_3x3.h"

#include "hw_classes.h"

struct I_I_id0_0_merged_banks_3_cache {
	// RAM Box: {[0, 31], [0, 7]}
	// Capacity: 65
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 31> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 31> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_31() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f1 inter false
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_32() {
		return f2;
	}

	inline hw_uint<16> peek_63() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f3 inter false
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_64() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f4 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 31
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f3 inter false
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f2 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 31
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f1 inter false
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct I_cache {
  I_I_id0_0_merged_banks_3_cache I_I_id0_0_merged_banks_3;
};



inline void I_I_id0_0_write(hw_uint<16>& I_I_id0_0, I_cache& I, int root, int id1, int id0) {
  I.I_I_id0_0_merged_banks_3.push(I_I_id0_0);
}

inline hw_uint<16> I_out_blur_30_3_select(I_cache& I, int root, int d1, int d0) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_30_3 read pattern: { out_blur_30[root = 0, d1, d0] -> I[d0, d1] : 0 <= d1 <= 5 and 0 <= d0 <= 31 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_3.peek_64();
  return value_I_I_id0_0;
	cout << "Error: Unsupported offsets: " << " root = " << root  << " d1 = " << d1  << " d0 = " << d0  << endl;
	assert(false);
	return 0;
}

inline hw_uint<16> I_out_blur_30_4_select(I_cache& I, int root, int d1, int d0) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_30_4 read pattern: { out_blur_30[root = 0, d1, d0] -> I[d0, 1 + d1] : 0 <= d1 <= 5 and 0 <= d0 <= 31 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_3.peek_32();
  return value_I_I_id0_0;
	cout << "Error: Unsupported offsets: " << " root = " << root  << " d1 = " << d1  << " d0 = " << d0  << endl;
	assert(false);
	return 0;
}

inline hw_uint<16> I_out_blur_30_5_select(I_cache& I, int root, int d1, int d0) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_30_5 read pattern: { out_blur_30[root = 0, d1, d0] -> I[d0, 2 + d1] : 0 <= d1 <= 5 and 0 <= d0 <= 31 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_3.peek_0();
  return value_I_I_id0_0;
	cout << "Error: Unsupported offsets: " << " root = " << root  << " d1 = " << d1  << " d0 = " << d0  << endl;
	assert(false);
	return 0;
}

// # of bundles = 2
// I_id0_write
//	I_I_id0_0
inline void I_I_id0_write_bundle_write(hw_uint<16>& I_id0_write, I_cache& I, int root, int id1, int id0) {
	hw_uint<16> I_I_id0_0_res = I_id0_write.extract<0, 15>();
	I_I_id0_0_write(I_I_id0_0_res, I, root, id1, id0);
}

// out_blur_30_read
//	I_out_blur_30_3
//	I_out_blur_30_4
//	I_out_blur_30_5
inline hw_uint<48> I_out_blur_30_read_bundle_read(I_cache& I, int root, int d1, int d0) {
	hw_uint<48> result;
	hw_uint<16> I_out_blur_30_3_res = I_out_blur_30_3_select(I, root, d1, d0);
	set_at<0, 48>(result, I_out_blur_30_3_res);
	hw_uint<16> I_out_blur_30_4_res = I_out_blur_30_4_select(I, root, d1, d0);
	set_at<16, 48>(result, I_out_blur_30_4_res);
	hw_uint<16> I_out_blur_30_5_res = I_out_blur_30_5_select(I, root, d1, d0);
	set_at<32, 48>(result, I_out_blur_30_5_res);
	return result;
}



// Operation logic
inline void I_id0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in, I_cache& I, int root, int id1, int id0) {
	// Consume: in
	auto in_id0_c__id1_value = in.read();
	auto compute_result = id(in_id0_c__id1_value);
	// Produce: I
	I_I_id0_write_bundle_write(compute_result, I, root, id1, id0);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "I_id0," << root<< "," << id1<< "," << id0<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void out_blur_30(I_cache& I, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */out, int root, int d1, int d0) {
	// Consume: I
	auto I_d0__p__0_c__d1__p__0_value = I_out_blur_30_read_bundle_read(I/* source_delay */, root, d1, d0);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "out_blur_30_I," << root<< "," << d1<< "," << d0<< "," <<  I_d0__p__0_c__d1__p__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = blur_3(I_d0__p__0_c__d1__p__0_value);
	// Produce: out
	out.write(compute_result);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "out_blur_30," << root<< "," << d1<< "," << d0<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

// Driver function
void blur_x(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<16> >& /* get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("blur_x_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  I_cache I;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
	for (int c0 = 0; c0 <= 7; c0 += 1)
	  for (int c1 = 0; c1 <= 31; c1 += 1) {
	I_id0(in, I, 0, c0, c1);
	    if (c0 >= 2)
	out_blur_30(I, out, 0, c0 - 2, c1);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}
