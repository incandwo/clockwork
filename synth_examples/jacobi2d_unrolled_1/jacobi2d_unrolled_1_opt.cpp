#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "jacobi2d_unrolled_1_opt_compute_units.h"

#include "hw_classes.h"

struct t1_t1_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 38
	// # of read delays: 6
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 16> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 16> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_17() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_18() {
		return f4;
	}

	inline hw_uint<32>  peek_19() {
		return f6;
	}

	inline hw_uint<32>  peek_20() {
		return f8;
	}

	inline hw_uint<32>  peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_37() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 16
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 16 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 16
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 16 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
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

inline hw_uint<32>  jacobi2d_unrolled_1_rd0_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_1_rd0 read pattern: { jacobi2d_unrolled_1_update_0[d0, d1] -> t1[-1 + d0, d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 16 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_1_update_0[d0, d1] -> 20 : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write0 = t1.t1_t1_update_0_write0_merged_banks_5.peek_20();
  return value_t1_t1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_1_rd1_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_1_rd1 read pattern: { jacobi2d_unrolled_1_update_0[d0, d1] -> t1[d0, -1 + d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 16 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_1_update_0[d0, d1] -> 37 : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write0 = t1.t1_t1_update_0_write0_merged_banks_5.peek_37();
  return value_t1_t1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_1_rd2_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_1_rd2 read pattern: { jacobi2d_unrolled_1_update_0[d0, d1] -> t1[d0, d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 16 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_1_update_0[d0, d1] -> 19 : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write0 = t1.t1_t1_update_0_write0_merged_banks_5.peek_19();
  return value_t1_t1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_1_rd3_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_1_rd3 read pattern: { jacobi2d_unrolled_1_update_0[d0, d1] -> t1[d0, 1 + d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 16 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write0 = t1.t1_t1_update_0_write0_merged_banks_5.peek_1();
  return value_t1_t1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_1_rd4_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_1_rd4 read pattern: { jacobi2d_unrolled_1_update_0[d0, d1] -> t1[1 + d0, d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 16 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_1_update_0[d0, d1] -> 18 : 0 <= d0 <= 14 and 0 <= d1 <= 15; jacobi2d_unrolled_1_update_0[d0, d1] -> (3 + d0) : d0 = 15 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write0 = t1.t1_t1_update_0_write0_merged_banks_5.peek_18();
  return value_t1_t1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// jacobi2d_unrolled_1_update_0_read
//	jacobi2d_unrolled_1_rd0
//	jacobi2d_unrolled_1_rd1
//	jacobi2d_unrolled_1_rd2
//	jacobi2d_unrolled_1_rd3
//	jacobi2d_unrolled_1_rd4
inline hw_uint<160> t1_jacobi2d_unrolled_1_update_0_read_bundle_read(t1_cache& t1, int d0, int d1) {
  // # of ports in bundle: 5
    // jacobi2d_unrolled_1_rd0
    // jacobi2d_unrolled_1_rd1
    // jacobi2d_unrolled_1_rd2
    // jacobi2d_unrolled_1_rd3
    // jacobi2d_unrolled_1_rd4

	hw_uint<160> result;
	hw_uint<32>  jacobi2d_unrolled_1_rd0_res = jacobi2d_unrolled_1_rd0_select(t1, d0, d1);
	set_at<0, 160>(result, jacobi2d_unrolled_1_rd0_res);
	hw_uint<32>  jacobi2d_unrolled_1_rd1_res = jacobi2d_unrolled_1_rd1_select(t1, d0, d1);
	set_at<32, 160>(result, jacobi2d_unrolled_1_rd1_res);
	hw_uint<32>  jacobi2d_unrolled_1_rd2_res = jacobi2d_unrolled_1_rd2_select(t1, d0, d1);
	set_at<64, 160>(result, jacobi2d_unrolled_1_rd2_res);
	hw_uint<32>  jacobi2d_unrolled_1_rd3_res = jacobi2d_unrolled_1_rd3_select(t1, d0, d1);
	set_at<96, 160>(result, jacobi2d_unrolled_1_rd3_res);
	hw_uint<32>  jacobi2d_unrolled_1_rd4_res = jacobi2d_unrolled_1_rd4_select(t1, d0, d1);
	set_at<128, 160>(result, jacobi2d_unrolled_1_rd4_res);
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
	auto compute_result = id_unrolled_1(t1_arg_0_c__0_value);
	// Produce: t1
	t1_t1_update_0_write_bundle_write(compute_result, t1, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void jacobi2d_unrolled_1_update_0(t1_cache& t1, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */jacobi2d_unrolled_1, int d0, int d1) {
	// Consume: t1
	auto t1_0_c__0_value = t1_jacobi2d_unrolled_1_update_0_read_bundle_read(t1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = jacobi2d_compute_unrolled_1(t1_0_c__0_value);
	// Produce: jacobi2d_unrolled_1
	jacobi2d_unrolled_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void jacobi2d_unrolled_1_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */t1_arg, HWStream<hw_uint<32> >& /* get_args num ports = 1 */jacobi2d_unrolled_1, int num_epochs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("jacobi2d_unrolled_1_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  t1_cache t1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

  for (int epoch = 0; epoch < num_epochs; epoch++) {
	  // Schedules...
	    // jacobi2d_unrolled_1_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // t1_arg_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // t1_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	for (int c0 = -1; c0 <= 16; c0++) {
	  for (int c1 = -1; c1 <= 16; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-1 <= c1 && c1 <= 16) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 16) && ((c0 - 0) % 1 == 0)) {
	t1_update_0(t1_arg, t1, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 16) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 16) && ((c0 - 1) % 1 == 0)) {
	jacobi2d_unrolled_1_update_0(t1, jacobi2d_unrolled_1, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	  }
	}
	
  }

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void jacobi2d_unrolled_1_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */t1_arg, HWStream<hw_uint<32> >& /* get_args num ports = 1 */jacobi2d_unrolled_1) {

  jacobi2d_unrolled_1_opt(t1_arg, jacobi2d_unrolled_1, 1);
}
#ifdef __VIVADO_SYNTH__
#include "jacobi2d_unrolled_1_opt.h"

const int jacobi2d_unrolled_1_update_0_write_num_transfers = 256;
const int t1_update_0_read_num_transfers = 324;


extern "C" {

static void read_t1_update_0_read(hw_uint<32>* input, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  int num_transfers = t1_update_0_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_jacobi2d_unrolled_1_update_0_write(hw_uint<32>* output, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  int num_transfers = jacobi2d_unrolled_1_update_0_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void jacobi2d_unrolled_1_opt_accel(hw_uint<32>* t1_update_0_read, hw_uint<32>* jacobi2d_unrolled_1_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = t1_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = jacobi2d_unrolled_1_update_0_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = t1_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = jacobi2d_unrolled_1_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<32> > t1_update_0_read_channel;
  static HWStream<hw_uint<32> > jacobi2d_unrolled_1_update_0_write_channel;

  read_t1_update_0_read(t1_update_0_read, t1_update_0_read_channel, size);

  jacobi2d_unrolled_1_opt(t1_update_0_read_channel, jacobi2d_unrolled_1_update_0_write_channel, size);

  write_jacobi2d_unrolled_1_update_0_write(jacobi2d_unrolled_1_update_0_write, jacobi2d_unrolled_1_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

