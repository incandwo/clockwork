#include "conv_3x3.h"

#include "hw_classes.h"

struct I_write_0_cache {
	// Capacity: 131
	// Parition [0, 1) capacity = 1
	fifo<int, 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<int, 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<int, 1> f4;
	// Parition [3, 64) capacity = 61
	fifo<int, 61> f5;
	// Parition [64, 65) capacity = 1
	fifo<int, 1> f6;
	// Parition [65, 66) capacity = 1
	fifo<int, 1> f8;
	// Parition [66, 67) capacity = 1
	fifo<int, 1> f10;
	// Parition [67, 128) capacity = 61
	fifo<int, 61> f11;
	// Parition [128, 129) capacity = 1
	fifo<int, 1> f12;
	// Parition [129, 130) capacity = 1
	fifo<int, 1> f14;
	// Parition [130, 130] capacity = 1
	fifo<int, 1> f16;


	inline int peek_0() {
		return f0.back();
	}

	inline int peek_1() {
		return f2.back();
	}

	inline int peek_2() {
		return f4.back();
	}

	inline int peek_63() {
		return f5.back();
	}

	inline int peek_64() {
		return f6.back();
	}

	inline int peek_65() {
		return f8.back();
	}

	inline int peek_66() {
		return f10.back();
	}

	inline int peek_127() {
		return f11.back();
	}

	inline int peek_128() {
		return f12.back();
	}

	inline int peek_129() {
		return f14.back();
	}

	inline int peek_130() {
		return f16.back();
	}



	inline int peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		if (offset == 63) {
			return f5.back();
		}
		if (offset == 64) {
			return f6.back();
		}
		if (offset == 65) {
			return f8.back();
		}
		if (offset == 66) {
			return f10.back();
		}
		if (offset == 127) {
			return f11.back();
		}
		if (offset == 128) {
			return f12.back();
		}
		if (offset == 129) {
			return f14.back();
		}
		if (offset == 130) {
			return f16.back();
		}
<<<<<<< HEAD
		//cout << "Error: Unsupported offset in I: " << offset << endl;
=======
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I: " << offset << endl;
#endif // __VIVADO_SYNTH__
>>>>>>> origin/master
		assert(false);
		return 0;

	}

	inline void push(const int value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};



inline void I_write_0_write(int& I_write_0, I_write_0_cache& I_write_0_delay) {
	I_write_0_delay.push(I_write_0);
}

inline int I_read_0_10_select(I_write_0_cache& I_write_0_delay
, int root, int lr, int lc) {
// Pieces...
// { read_0[root = 0, lr, lc] : 0 <= lr <= 61 and 0 <= lc <= 60 } -> { read_0[root, lr, lc] -> 64 }
// 	is always true on iteration domain: 0
// { read_0[root = 0, lr, lc = 61] : 0 <= lr <= 61 } -> { read_0[root, lr, lc] -> (3 + lc) }
// 	is always true on iteration domain: 0
<<<<<<< HEAD
	int value_I_write_0 = I_write_0_delay.peek(64);
  //((root == 0 && lr >= 0 && 61 - lr >= 0 && lc >= 0 && 60 - lc >= 0) ? (64) : (-61 + lc == 0 && root == 0 && lr >= 0 && 61 - lr >= 0) ? ((3 + lc)) : 0));
=======
//	is optimizable constant: 1
	int value_I_write_0 = I_write_0_delay.peek_64();
>>>>>>> origin/master
	return value_I_write_0;
}

inline int I_read_0_11_select(I_write_0_cache& I_write_0_delay
, int root, int lr, int lc) {
// Pieces...
//	is optimizable constant: 0
	int value_I_write_0 = I_write_0_delay.peek_0();
	return value_I_write_0;
}

inline int I_read_0_3_select(I_write_0_cache& I_write_0_delay
, int root, int lr, int lc) {
// Pieces...
// { read_0[root = 0, lr, lc] : 0 <= lr <= 61 and 0 <= lc <= 61 } -> { read_0[root, lr, lc] -> 130 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_write_0 = I_write_0_delay.peek_130();
	return value_I_write_0;
}

inline int I_read_0_4_select(I_write_0_cache& I_write_0_delay
, int root, int lr, int lc) {
// Pieces...
// { read_0[root = 0, lr, lc] : 0 <= lr <= 61 and 0 <= lc <= 61 } -> { read_0[root, lr, lc] -> 66 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_write_0 = I_write_0_delay.peek_66();
	return value_I_write_0;
}

inline int I_read_0_5_select(I_write_0_cache& I_write_0_delay
, int root, int lr, int lc) {
// Pieces...
// { read_0[root = 0, lr, lc] : 0 <= lr <= 61 and 0 <= lc <= 61 } -> { read_0[root, lr, lc] -> 2 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_write_0 = I_write_0_delay.peek_2();
	return value_I_write_0;
}

inline int I_read_0_6_select(I_write_0_cache& I_write_0_delay
, int root, int lr, int lc) {
// Pieces...
// { read_0[root = 0, lr, lc] : 0 <= lr <= 61 and 0 <= lc <= 61 } -> { read_0[root, lr, lc] -> 129 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_write_0 = I_write_0_delay.peek_129();
	return value_I_write_0;
}

inline int I_read_0_7_select(I_write_0_cache& I_write_0_delay
, int root, int lr, int lc) {
// Pieces...
// { read_0[root = 0, lr, lc] : 0 <= lr <= 61 and 0 <= lc <= 61 } -> { read_0[root, lr, lc] -> 65 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_write_0 = I_write_0_delay.peek_65();
	return value_I_write_0;
}

inline int I_read_0_8_select(I_write_0_cache& I_write_0_delay
, int root, int lr, int lc) {
// Pieces...
// { read_0[root = 0, lr, lc] : 0 <= lr <= 61 and 0 <= lc <= 61 } -> { read_0[root, lr, lc] -> 1 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_write_0 = I_write_0_delay.peek_1();
	return value_I_write_0;
}

inline int I_read_0_9_select(I_write_0_cache& I_write_0_delay
, int root, int lr, int lc) {
// Pieces...
// { read_0[root = 0, lr, lc] : 0 <= lr <= 61 and 0 <= lc <= 60 } -> { read_0[root, lr, lc] -> 128 }
// 	is always true on iteration domain: 0
// { read_0[root = 0, lr, lc = 61] : 0 <= lr <= 61 } -> { read_0[root, lr, lc] -> (67 + lc) }
// 	is always true on iteration domain: 0
<<<<<<< HEAD
	int value_I_write_0 = I_write_0_delay.peek(128);
  //((root == 0 && lr >= 0 && 61 - lr >= 0 && lc >= 0 && 60 - lc >= 0) ? (128) : (-61 + lc == 0 && root == 0 && lr >= 0 && 61 - lr >= 0) ? ((67 + lc)) : 0));
=======
//	is optimizable constant: 1
	int value_I_write_0 = I_write_0_delay.peek_128();
>>>>>>> origin/master
	return value_I_write_0;
}

// Bundles...
// I_write_0
//	I_write_0
inline void I_I_write_0_bundle_write(int& /* width = 32*/I_write_0, I_write_0_cache& I_write_0_delay) {
	I_write_0_write(I_write_0, I_write_0_delay);
}

// read_0_read
//	I_read_0_3
//	I_read_0_4
//	I_read_0_5
//	I_read_0_6
//	I_read_0_7
//	I_read_0_8
//	I_read_0_9
//	I_read_0_10
//	I_read_0_11
inline hw_uint<288> I_read_0_read_bundle_read(I_write_0_cache& I_write_0_delay, int root, int lr, int lc) {
	hw_uint<288> result;
	int I_read_0_3_res = I_read_0_3_select(I_write_0_delay, root, lr, lc);
	set_at<0, 288>(result, I_read_0_3_res);
	int I_read_0_4_res = I_read_0_4_select(I_write_0_delay, root, lr, lc);
	set_at<32, 288>(result, I_read_0_4_res);
	int I_read_0_5_res = I_read_0_5_select(I_write_0_delay, root, lr, lc);
	set_at<64, 288>(result, I_read_0_5_res);
	int I_read_0_6_res = I_read_0_6_select(I_write_0_delay, root, lr, lc);
	set_at<96, 288>(result, I_read_0_6_res);
	int I_read_0_7_res = I_read_0_7_select(I_write_0_delay, root, lr, lc);
	set_at<128, 288>(result, I_read_0_7_res);
	int I_read_0_8_res = I_read_0_8_select(I_write_0_delay, root, lr, lc);
	set_at<160, 288>(result, I_read_0_8_res);
	int I_read_0_9_res = I_read_0_9_select(I_write_0_delay, root, lr, lc);
	set_at<192, 288>(result, I_read_0_9_res);
	int I_read_0_10_res = I_read_0_10_select(I_write_0_delay, root, lr, lc);
	set_at<224, 288>(result, I_read_0_10_res);
	int I_read_0_11_res = I_read_0_11_select(I_write_0_delay, root, lr, lc);
	set_at<256, 288>(result, I_read_0_11_res);
	return result;
}

// write_write
//	I_write_0
inline void I_write_write_bundle_write(int& /* width = 32*/write_write, I_write_0_cache& I_write_0_delay) {
	I_write_0_write(write_write, I_write_0_delay);
}





// Operation logic
inline void write(HWStream<int>& in, I_write_0_cache& I_write_0, int root, int pr, int pc) {
	// Consume: in
	auto in_pc_c__pr_value = in.read();
	// Produce: I
	// Buffer: I, Op: write
	// Possible ports...
		// I_write_0
	I_write_write_bundle_write(in_pc_c__pr_value, I_write_0 /* output src_delay */);
}

inline void read_0(I_write_0_cache& I_write_0, HWStream<int>& out, int root, int lr, int lc) {
	// Consume: I
	auto I_lc__p__0_c__lr__p__0_value = I_read_0_read_bundle_read(I_write_0/* source_delay */, root, lr, lc);
	// Apply function: conv_3_3
	auto compute_result = conv_3_3(I_lc__p__0_c__lr__p__0_value);
	// Produce: out
	out.write(compute_result);
}

// Driver function
void conv_2d(HWStream<int>& in, HWStream<int>& out) {
	I_write_0_cache I_write_0;
	for (int c0 = 0; c0 <= 63; c0 += 1)
	  for (int c1 = 0; c1 <= 63; c1 += 1) {
#pragma HLS pipeline
#pragma HLS dependence variable=I_write_0.f5.vals inter false
#pragma HLS dependence variable=I_write_0.f11.vals inter false
	    write(in, I_write_0, 0, c0, c1);
	    if (c0 >= 2 && c1 >= 2)
	      read_0(I_write_0, out, 0, c0 - 2, c1 - 2);
	  }
	
}


