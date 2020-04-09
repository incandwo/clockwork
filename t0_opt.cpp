#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "t0_opt_compute_units.h"

#include "hw_classes.h"

struct t1_t1_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-1, 32], [-1, 28]}
	// Capacity: 70
	// # of read delays: 6
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 32> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 32> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_33() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f3 inter false
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_34() {
		return f4;
	}

	inline hw_uint<32>  peek_35() {
		return f6;
	}

	inline hw_uint<32>  peek_36() {
		return f8;
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f9 inter false
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_69() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f10 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f9 inter false
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f8 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f6 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f4 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f3 inter false
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f2 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct t1_cache {
  t1_t1_update_0_write0_merged_banks_5_cache t1_t1_update_0_write0_merged_banks_5;
};



inline void t1_t1_update_0_write0_write(hw_uint<32> & t1_t1_update_0_write0, t1_cache& t1, int d0, int d1) {
  t1.t1_t1_update_0_write0_merged_banks_5.push(t1_t1_update_0_write0);
}

inline hw_uint<32>  t0_rd0_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=t1 inter false
#endif //__VIVADO_SYNTH__
  // t0_rd0 read pattern: { t0_update_0[d0, d1] -> t1[-1 + d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // Read schedule : { t0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 28 }
  // DD fold: { t0_update_0[d0, d1] -> 36 : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  auto value_t1_t1_update_0_write0 = t1.t1_t1_update_0_write0_merged_banks_5.peek_36();
  return value_t1_t1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  t0_rd1_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=t1 inter false
#endif //__VIVADO_SYNTH__
  // t0_rd1 read pattern: { t0_update_0[d0, d1] -> t1[d0, -1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // Read schedule : { t0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 28 }
  // DD fold: { t0_update_0[d0, d1] -> 69 : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  auto value_t1_t1_update_0_write0 = t1.t1_t1_update_0_write0_merged_banks_5.peek_69();
  return value_t1_t1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  t0_rd2_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=t1 inter false
#endif //__VIVADO_SYNTH__
  // t0_rd2 read pattern: { t0_update_0[d0, d1] -> t1[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // Read schedule : { t0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 28 }
  // DD fold: { t0_update_0[d0, d1] -> 35 : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  auto value_t1_t1_update_0_write0 = t1.t1_t1_update_0_write0_merged_banks_5.peek_35();
  return value_t1_t1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  t0_rd3_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=t1 inter false
#endif //__VIVADO_SYNTH__
  // t0_rd3 read pattern: { t0_update_0[d0, d1] -> t1[d0, 1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // Read schedule : { t0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 28 }
  // DD fold: { t0_update_0[d0, d1] -> 1 : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  auto value_t1_t1_update_0_write0 = t1.t1_t1_update_0_write0_merged_banks_5.peek_1();
  return value_t1_t1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  t0_rd4_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=t1 inter false
#endif //__VIVADO_SYNTH__
  // t0_rd4 read pattern: { t0_update_0[d0, d1] -> t1[1 + d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // Read schedule : { t0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 28 }
  // DD fold: { t0_update_0[d0, d1] -> 34 : 0 <= d0 <= 30 and 0 <= d1 <= 27; t0_update_0[d0, d1] -> (3 + d0) : d0 = 31 and 0 <= d1 <= 27 }
  auto value_t1_t1_update_0_write0 = t1.t1_t1_update_0_write0_merged_banks_5.peek_34();
  return value_t1_t1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// t0_update_0_read
//	t0_rd0
//	t0_rd1
//	t0_rd2
//	t0_rd3
//	t0_rd4
inline hw_uint<160> t1_t0_update_0_read_bundle_read(t1_cache& t1, int d0, int d1) {
	hw_uint<160> result;
	hw_uint<32>  t0_rd0_res = t0_rd0_select(t1, d0, d1);
	set_at<0, 160>(result, t0_rd0_res);
	hw_uint<32>  t0_rd1_res = t0_rd1_select(t1, d0, d1);
	set_at<32, 160>(result, t0_rd1_res);
	hw_uint<32>  t0_rd2_res = t0_rd2_select(t1, d0, d1);
	set_at<64, 160>(result, t0_rd2_res);
	hw_uint<32>  t0_rd3_res = t0_rd3_select(t1, d0, d1);
	set_at<96, 160>(result, t0_rd3_res);
	hw_uint<32>  t0_rd4_res = t0_rd4_select(t1, d0, d1);
	set_at<128, 160>(result, t0_rd4_res);
	return result;
}

// t1_update_0_write
//	t1_t1_update_0_write0
inline void t1_t1_update_0_write_bundle_write(hw_uint<32>& t1_update_0_write, t1_cache& t1, int d0, int d1) {
	hw_uint<32>  t1_t1_update_0_write0_res = t1_update_0_write.extract<0, 31>();
	t1_t1_update_0_write0_write(t1_t1_update_0_write0_res, t1, d0, d1);
}



// Operation logic
inline void t1_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */t1_arg, t1_cache& t1, int d0, int d1) {
	// Consume: t1_arg
	auto t1_arg_0_c__0_value = t1_arg.read();
	auto compute_result = id(t1_arg_0_c__0_value);
	// Produce: t1
	t1_t1_update_0_write_bundle_write(compute_result, t1, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "t1_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void t0_update_0(t1_cache& t1, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */t0, int d0, int d1) {
	// Consume: t1
	auto t1_0_c__0_value = t1_t0_update_0_read_bundle_read(t1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "t0_update_0_t1," << d0<< "," << d1<< "," <<  t1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = jacobi2d_compute(t1_0_c__0_value);
	// Produce: t0
	t0.write(compute_result);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "t0_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

// Driver function
void t0_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */t1_arg, HWStream<hw_uint<32> >& /* get_args num ports = 1 */t0) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("t0_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  t1_cache t1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=t1 inter false
#endif //__VIVADO_SYNTH__
	#ifdef __VIVADO_SYNTH__
	#pragma HLS inline recursive
	#endif // __VIVADO_SYNTH__
	
	for (int c0 = -1; c0 <= 28; c0++) {
	  for (int c1 = -1; c1 <= 32; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS dependence inter false
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-1 <= c1 && c1 <= 32) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 28) && ((c0 - 0) % 1 == 0)) {
	t1_update_0(t1_arg, t1, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 32) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 28) && ((c0 - 1) % 1 == 0)) {
	t0_update_0(t1, t0, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}
