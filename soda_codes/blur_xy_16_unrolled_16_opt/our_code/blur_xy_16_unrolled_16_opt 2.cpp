#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "blur_xy_16_unrolled_16_opt_compute_units.h"

#include "hw_classes.h"

struct blurx_blurx_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 1920], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
	hw_uint<16> f0;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct blurx_blurx_update_0_write1_merged_banks_2_cache {
	// RAM Box: {[0, 1921], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
	hw_uint<16> f0;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct blurx_blurx_update_0_write10_merged_banks_1_cache {
	// RAM Box: {[0, 1930], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
	fifo<hw_uint<16>, 2> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blurx_blurx_update_0_write11_merged_banks_1_cache {
	// RAM Box: {[0, 1931], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
	fifo<hw_uint<16>, 2> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blurx_blurx_update_0_write12_merged_banks_1_cache {
	// RAM Box: {[0, 1932], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
	fifo<hw_uint<16>, 2> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blurx_blurx_update_0_write13_merged_banks_1_cache {
	// RAM Box: {[0, 1933], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
	fifo<hw_uint<16>, 2> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blurx_blurx_update_0_write14_merged_banks_1_cache {
	// RAM Box: {[0, 1934], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
	fifo<hw_uint<16>, 2> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blurx_blurx_update_0_write15_merged_banks_1_cache {
	// RAM Box: {[0, 1935], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
	fifo<hw_uint<16>, 2> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blurx_blurx_update_0_write2_merged_banks_1_cache {
	// RAM Box: {[0, 1922], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
	fifo<hw_uint<16>, 2> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blurx_blurx_update_0_write3_merged_banks_1_cache {
	// RAM Box: {[0, 1923], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
	fifo<hw_uint<16>, 2> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blurx_blurx_update_0_write4_merged_banks_1_cache {
	// RAM Box: {[0, 1924], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
	fifo<hw_uint<16>, 2> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blurx_blurx_update_0_write5_merged_banks_1_cache {
	// RAM Box: {[0, 1925], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
	fifo<hw_uint<16>, 2> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blurx_blurx_update_0_write6_merged_banks_1_cache {
	// RAM Box: {[0, 1926], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
	fifo<hw_uint<16>, 2> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blurx_blurx_update_0_write7_merged_banks_1_cache {
	// RAM Box: {[0, 1927], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
	fifo<hw_uint<16>, 2> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blurx_blurx_update_0_write8_merged_banks_1_cache {
	// RAM Box: {[0, 1928], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
	fifo<hw_uint<16>, 2> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blurx_blurx_update_0_write9_merged_banks_1_cache {
	// RAM Box: {[0, 1929], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
	fifo<hw_uint<16>, 2> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blurx_cache {
  blurx_blurx_update_0_write0_merged_banks_2_cache blurx_blurx_update_0_write0_merged_banks_2;
  blurx_blurx_update_0_write1_merged_banks_2_cache blurx_blurx_update_0_write1_merged_banks_2;
  blurx_blurx_update_0_write10_merged_banks_1_cache blurx_blurx_update_0_write10_merged_banks_1;
  blurx_blurx_update_0_write11_merged_banks_1_cache blurx_blurx_update_0_write11_merged_banks_1;
  blurx_blurx_update_0_write12_merged_banks_1_cache blurx_blurx_update_0_write12_merged_banks_1;
  blurx_blurx_update_0_write13_merged_banks_1_cache blurx_blurx_update_0_write13_merged_banks_1;
  blurx_blurx_update_0_write14_merged_banks_1_cache blurx_blurx_update_0_write14_merged_banks_1;
  blurx_blurx_update_0_write15_merged_banks_1_cache blurx_blurx_update_0_write15_merged_banks_1;
  blurx_blurx_update_0_write2_merged_banks_1_cache blurx_blurx_update_0_write2_merged_banks_1;
  blurx_blurx_update_0_write3_merged_banks_1_cache blurx_blurx_update_0_write3_merged_banks_1;
  blurx_blurx_update_0_write4_merged_banks_1_cache blurx_blurx_update_0_write4_merged_banks_1;
  blurx_blurx_update_0_write5_merged_banks_1_cache blurx_blurx_update_0_write5_merged_banks_1;
  blurx_blurx_update_0_write6_merged_banks_1_cache blurx_blurx_update_0_write6_merged_banks_1;
  blurx_blurx_update_0_write7_merged_banks_1_cache blurx_blurx_update_0_write7_merged_banks_1;
  blurx_blurx_update_0_write8_merged_banks_1_cache blurx_blurx_update_0_write8_merged_banks_1;
  blurx_blurx_update_0_write9_merged_banks_1_cache blurx_blurx_update_0_write9_merged_banks_1;
};



inline void blurx_blurx_update_0_write0_write(hw_uint<16>& blurx_blurx_update_0_write0, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write0_merged_banks_2.push(blurx_blurx_update_0_write0);
}

inline void blurx_blurx_update_0_write1_write(hw_uint<16>& blurx_blurx_update_0_write1, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write1_merged_banks_2.push(blurx_blurx_update_0_write1);
}

inline void blurx_blurx_update_0_write10_write(hw_uint<16>& blurx_blurx_update_0_write10, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write10_merged_banks_1.push(blurx_blurx_update_0_write10);
}

inline void blurx_blurx_update_0_write11_write(hw_uint<16>& blurx_blurx_update_0_write11, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write11_merged_banks_1.push(blurx_blurx_update_0_write11);
}

inline void blurx_blurx_update_0_write12_write(hw_uint<16>& blurx_blurx_update_0_write12, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write12_merged_banks_1.push(blurx_blurx_update_0_write12);
}

inline void blurx_blurx_update_0_write13_write(hw_uint<16>& blurx_blurx_update_0_write13, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write13_merged_banks_1.push(blurx_blurx_update_0_write13);
}

inline void blurx_blurx_update_0_write14_write(hw_uint<16>& blurx_blurx_update_0_write14, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write14_merged_banks_1.push(blurx_blurx_update_0_write14);
}

inline void blurx_blurx_update_0_write15_write(hw_uint<16>& blurx_blurx_update_0_write15, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write15_merged_banks_1.push(blurx_blurx_update_0_write15);
}

inline void blurx_blurx_update_0_write2_write(hw_uint<16>& blurx_blurx_update_0_write2, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write2_merged_banks_1.push(blurx_blurx_update_0_write2);
}

inline void blurx_blurx_update_0_write3_write(hw_uint<16>& blurx_blurx_update_0_write3, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write3_merged_banks_1.push(blurx_blurx_update_0_write3);
}

inline void blurx_blurx_update_0_write4_write(hw_uint<16>& blurx_blurx_update_0_write4, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write4_merged_banks_1.push(blurx_blurx_update_0_write4);
}

inline void blurx_blurx_update_0_write5_write(hw_uint<16>& blurx_blurx_update_0_write5, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write5_merged_banks_1.push(blurx_blurx_update_0_write5);
}

inline void blurx_blurx_update_0_write6_write(hw_uint<16>& blurx_blurx_update_0_write6, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write6_merged_banks_1.push(blurx_blurx_update_0_write6);
}

inline void blurx_blurx_update_0_write7_write(hw_uint<16>& blurx_blurx_update_0_write7, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write7_merged_banks_1.push(blurx_blurx_update_0_write7);
}

inline void blurx_blurx_update_0_write8_write(hw_uint<16>& blurx_blurx_update_0_write8, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write8_merged_banks_1.push(blurx_blurx_update_0_write8);
}

inline void blurx_blurx_update_0_write9_write(hw_uint<16>& blurx_blurx_update_0_write9, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write9_merged_banks_1.push(blurx_blurx_update_0_write9);
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd0_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd0 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write0 = blurx.blurx_blurx_update_0_write0_merged_banks_2.peek_1();
  return value_blurx_blurx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd1_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd1 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write1 = blurx.blurx_blurx_update_0_write1_merged_banks_2.peek_1();
  return value_blurx_blurx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd10_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd10 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write10 = blurx.blurx_blurx_update_0_write10_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write10;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd11_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd11 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write11 = blurx.blurx_blurx_update_0_write11_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write11;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd12_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd12 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write12 = blurx.blurx_blurx_update_0_write12_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write12;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd13_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd13 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write13 = blurx.blurx_blurx_update_0_write13_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write13;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd14_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd14 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write14 = blurx.blurx_blurx_update_0_write14_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write14;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd15_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd15 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[15 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write15 = blurx.blurx_blurx_update_0_write15_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write15;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd16_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd16 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[16 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_blurx_blurx_update_0_write0 = blurx.blurx_blurx_update_0_write0_merged_banks_2.peek_0();
  return value_blurx_blurx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd17_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd17 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[17 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_blurx_blurx_update_0_write1 = blurx.blurx_blurx_update_0_write1_merged_banks_2.peek_0();
  return value_blurx_blurx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd2_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd2 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write2 = blurx.blurx_blurx_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd3_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd3 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write3 = blurx.blurx_blurx_update_0_write3_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd4_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd4 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write4 = blurx.blurx_blurx_update_0_write4_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd5_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd5 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write5 = blurx.blurx_blurx_update_0_write5_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd6_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd6 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write6 = blurx.blurx_blurx_update_0_write6_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd7_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd7 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write7 = blurx.blurx_blurx_update_0_write7_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd8_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd8 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write8 = blurx.blurx_blurx_update_0_write8_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write8;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd9_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd9 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write9 = blurx.blurx_blurx_update_0_write9_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write9;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// blur_xy_16_unrolled_16_update_0_read
//	blur_xy_16_unrolled_16_rd0
//	blur_xy_16_unrolled_16_rd1
//	blur_xy_16_unrolled_16_rd2
//	blur_xy_16_unrolled_16_rd3
//	blur_xy_16_unrolled_16_rd4
//	blur_xy_16_unrolled_16_rd5
//	blur_xy_16_unrolled_16_rd6
//	blur_xy_16_unrolled_16_rd7
//	blur_xy_16_unrolled_16_rd8
//	blur_xy_16_unrolled_16_rd9
//	blur_xy_16_unrolled_16_rd10
//	blur_xy_16_unrolled_16_rd11
//	blur_xy_16_unrolled_16_rd12
//	blur_xy_16_unrolled_16_rd13
//	blur_xy_16_unrolled_16_rd14
//	blur_xy_16_unrolled_16_rd15
//	blur_xy_16_unrolled_16_rd16
//	blur_xy_16_unrolled_16_rd17
inline hw_uint<288> blurx_blur_xy_16_unrolled_16_update_0_read_bundle_read(blurx_cache& blurx, int d0, int d1) {
  // # of ports in bundle: 18
    // blur_xy_16_unrolled_16_rd0
    // blur_xy_16_unrolled_16_rd1
    // blur_xy_16_unrolled_16_rd2
    // blur_xy_16_unrolled_16_rd3
    // blur_xy_16_unrolled_16_rd4
    // blur_xy_16_unrolled_16_rd5
    // blur_xy_16_unrolled_16_rd6
    // blur_xy_16_unrolled_16_rd7
    // blur_xy_16_unrolled_16_rd8
    // blur_xy_16_unrolled_16_rd9
    // blur_xy_16_unrolled_16_rd10
    // blur_xy_16_unrolled_16_rd11
    // blur_xy_16_unrolled_16_rd12
    // blur_xy_16_unrolled_16_rd13
    // blur_xy_16_unrolled_16_rd14
    // blur_xy_16_unrolled_16_rd15
    // blur_xy_16_unrolled_16_rd16
    // blur_xy_16_unrolled_16_rd17

	hw_uint<288> result;
	hw_uint<16> blur_xy_16_unrolled_16_rd0_res = blur_xy_16_unrolled_16_rd0_select(blurx, d0, d1);
	set_at<0, 288>(result, blur_xy_16_unrolled_16_rd0_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd1_res = blur_xy_16_unrolled_16_rd1_select(blurx, d0, d1);
	set_at<16, 288>(result, blur_xy_16_unrolled_16_rd1_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd2_res = blur_xy_16_unrolled_16_rd2_select(blurx, d0, d1);
	set_at<32, 288>(result, blur_xy_16_unrolled_16_rd2_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd3_res = blur_xy_16_unrolled_16_rd3_select(blurx, d0, d1);
	set_at<48, 288>(result, blur_xy_16_unrolled_16_rd3_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd4_res = blur_xy_16_unrolled_16_rd4_select(blurx, d0, d1);
	set_at<64, 288>(result, blur_xy_16_unrolled_16_rd4_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd5_res = blur_xy_16_unrolled_16_rd5_select(blurx, d0, d1);
	set_at<80, 288>(result, blur_xy_16_unrolled_16_rd5_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd6_res = blur_xy_16_unrolled_16_rd6_select(blurx, d0, d1);
	set_at<96, 288>(result, blur_xy_16_unrolled_16_rd6_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd7_res = blur_xy_16_unrolled_16_rd7_select(blurx, d0, d1);
	set_at<112, 288>(result, blur_xy_16_unrolled_16_rd7_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd8_res = blur_xy_16_unrolled_16_rd8_select(blurx, d0, d1);
	set_at<128, 288>(result, blur_xy_16_unrolled_16_rd8_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd9_res = blur_xy_16_unrolled_16_rd9_select(blurx, d0, d1);
	set_at<144, 288>(result, blur_xy_16_unrolled_16_rd9_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd10_res = blur_xy_16_unrolled_16_rd10_select(blurx, d0, d1);
	set_at<160, 288>(result, blur_xy_16_unrolled_16_rd10_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd11_res = blur_xy_16_unrolled_16_rd11_select(blurx, d0, d1);
	set_at<176, 288>(result, blur_xy_16_unrolled_16_rd11_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd12_res = blur_xy_16_unrolled_16_rd12_select(blurx, d0, d1);
	set_at<192, 288>(result, blur_xy_16_unrolled_16_rd12_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd13_res = blur_xy_16_unrolled_16_rd13_select(blurx, d0, d1);
	set_at<208, 288>(result, blur_xy_16_unrolled_16_rd13_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd14_res = blur_xy_16_unrolled_16_rd14_select(blurx, d0, d1);
	set_at<224, 288>(result, blur_xy_16_unrolled_16_rd14_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd15_res = blur_xy_16_unrolled_16_rd15_select(blurx, d0, d1);
	set_at<240, 288>(result, blur_xy_16_unrolled_16_rd15_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd16_res = blur_xy_16_unrolled_16_rd16_select(blurx, d0, d1);
	set_at<256, 288>(result, blur_xy_16_unrolled_16_rd16_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd17_res = blur_xy_16_unrolled_16_rd17_select(blurx, d0, d1);
	set_at<272, 288>(result, blur_xy_16_unrolled_16_rd17_res);
	return result;
}

// blurx_update_0_write
//	blurx_blurx_update_0_write0
//	blurx_blurx_update_0_write1
//	blurx_blurx_update_0_write2
//	blurx_blurx_update_0_write3
//	blurx_blurx_update_0_write4
//	blurx_blurx_update_0_write5
//	blurx_blurx_update_0_write6
//	blurx_blurx_update_0_write7
//	blurx_blurx_update_0_write8
//	blurx_blurx_update_0_write9
//	blurx_blurx_update_0_write10
//	blurx_blurx_update_0_write11
//	blurx_blurx_update_0_write12
//	blurx_blurx_update_0_write13
//	blurx_blurx_update_0_write14
//	blurx_blurx_update_0_write15
inline void blurx_blurx_update_0_write_bundle_write(hw_uint<256>& blurx_update_0_write, blurx_cache& blurx, int d0, int d1) {
	hw_uint<16> blurx_blurx_update_0_write0_res = blurx_update_0_write.extract<0, 15>();
	blurx_blurx_update_0_write0_write(blurx_blurx_update_0_write0_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write1_res = blurx_update_0_write.extract<16, 31>();
	blurx_blurx_update_0_write1_write(blurx_blurx_update_0_write1_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write2_res = blurx_update_0_write.extract<32, 47>();
	blurx_blurx_update_0_write2_write(blurx_blurx_update_0_write2_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write3_res = blurx_update_0_write.extract<48, 63>();
	blurx_blurx_update_0_write3_write(blurx_blurx_update_0_write3_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write4_res = blurx_update_0_write.extract<64, 79>();
	blurx_blurx_update_0_write4_write(blurx_blurx_update_0_write4_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write5_res = blurx_update_0_write.extract<80, 95>();
	blurx_blurx_update_0_write5_write(blurx_blurx_update_0_write5_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write6_res = blurx_update_0_write.extract<96, 111>();
	blurx_blurx_update_0_write6_write(blurx_blurx_update_0_write6_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write7_res = blurx_update_0_write.extract<112, 127>();
	blurx_blurx_update_0_write7_write(blurx_blurx_update_0_write7_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write8_res = blurx_update_0_write.extract<128, 143>();
	blurx_blurx_update_0_write8_write(blurx_blurx_update_0_write8_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write9_res = blurx_update_0_write.extract<144, 159>();
	blurx_blurx_update_0_write9_write(blurx_blurx_update_0_write9_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write10_res = blurx_update_0_write.extract<160, 175>();
	blurx_blurx_update_0_write10_write(blurx_blurx_update_0_write10_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write11_res = blurx_update_0_write.extract<176, 191>();
	blurx_blurx_update_0_write11_write(blurx_blurx_update_0_write11_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write12_res = blurx_update_0_write.extract<192, 207>();
	blurx_blurx_update_0_write12_write(blurx_blurx_update_0_write12_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write13_res = blurx_update_0_write.extract<208, 223>();
	blurx_blurx_update_0_write13_write(blurx_blurx_update_0_write13_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write14_res = blurx_update_0_write.extract<224, 239>();
	blurx_blurx_update_0_write14_write(blurx_blurx_update_0_write14_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write15_res = blurx_update_0_write.extract<240, 255>();
	blurx_blurx_update_0_write15_write(blurx_blurx_update_0_write15_res, blurx, d0, d1);
}

#include "hw_classes.h"

struct input_input_update_0_write0_merged_banks_3_cache {
	// RAM Box: {[0, 1920], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
		return f2;
	}

	inline hw_uint<16> peek_241() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_242() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write1_merged_banks_3_cache {
	// RAM Box: {[0, 1921], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
		return f2;
	}

	inline hw_uint<16> peek_241() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_242() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write10_merged_banks_3_cache {
	// RAM Box: {[0, 1930], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
		return f2;
	}

	inline hw_uint<16> peek_241() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_242() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write11_merged_banks_3_cache {
	// RAM Box: {[0, 1931], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
		return f2;
	}

	inline hw_uint<16> peek_241() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_242() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write12_merged_banks_3_cache {
	// RAM Box: {[0, 1932], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
		return f2;
	}

	inline hw_uint<16> peek_241() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_242() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write13_merged_banks_3_cache {
	// RAM Box: {[0, 1933], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
		return f2;
	}

	inline hw_uint<16> peek_241() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_242() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write14_merged_banks_3_cache {
	// RAM Box: {[0, 1934], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
		return f2;
	}

	inline hw_uint<16> peek_241() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_242() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write15_merged_banks_3_cache {
	// RAM Box: {[0, 1935], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
		return f2;
	}

	inline hw_uint<16> peek_241() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_242() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write2_merged_banks_3_cache {
	// RAM Box: {[0, 1922], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
		return f2;
	}

	inline hw_uint<16> peek_241() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_242() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write3_merged_banks_3_cache {
	// RAM Box: {[0, 1923], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
		return f2;
	}

	inline hw_uint<16> peek_241() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_242() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write4_merged_banks_3_cache {
	// RAM Box: {[0, 1924], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
		return f2;
	}

	inline hw_uint<16> peek_241() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_242() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write5_merged_banks_3_cache {
	// RAM Box: {[0, 1925], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
		return f2;
	}

	inline hw_uint<16> peek_241() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_242() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write6_merged_banks_3_cache {
	// RAM Box: {[0, 1926], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
		return f2;
	}

	inline hw_uint<16> peek_241() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_242() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write7_merged_banks_3_cache {
	// RAM Box: {[0, 1927], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
		return f2;
	}

	inline hw_uint<16> peek_241() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_242() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write8_merged_banks_3_cache {
	// RAM Box: {[0, 1928], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
		return f2;
	}

	inline hw_uint<16> peek_241() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_242() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write9_merged_banks_3_cache {
	// RAM Box: {[0, 1929], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
		return f2;
	}

	inline hw_uint<16> peek_241() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_242() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_cache {
  input_input_update_0_write0_merged_banks_3_cache input_input_update_0_write0_merged_banks_3;
  input_input_update_0_write1_merged_banks_3_cache input_input_update_0_write1_merged_banks_3;
  input_input_update_0_write10_merged_banks_3_cache input_input_update_0_write10_merged_banks_3;
  input_input_update_0_write11_merged_banks_3_cache input_input_update_0_write11_merged_banks_3;
  input_input_update_0_write12_merged_banks_3_cache input_input_update_0_write12_merged_banks_3;
  input_input_update_0_write13_merged_banks_3_cache input_input_update_0_write13_merged_banks_3;
  input_input_update_0_write14_merged_banks_3_cache input_input_update_0_write14_merged_banks_3;
  input_input_update_0_write15_merged_banks_3_cache input_input_update_0_write15_merged_banks_3;
  input_input_update_0_write2_merged_banks_3_cache input_input_update_0_write2_merged_banks_3;
  input_input_update_0_write3_merged_banks_3_cache input_input_update_0_write3_merged_banks_3;
  input_input_update_0_write4_merged_banks_3_cache input_input_update_0_write4_merged_banks_3;
  input_input_update_0_write5_merged_banks_3_cache input_input_update_0_write5_merged_banks_3;
  input_input_update_0_write6_merged_banks_3_cache input_input_update_0_write6_merged_banks_3;
  input_input_update_0_write7_merged_banks_3_cache input_input_update_0_write7_merged_banks_3;
  input_input_update_0_write8_merged_banks_3_cache input_input_update_0_write8_merged_banks_3;
  input_input_update_0_write9_merged_banks_3_cache input_input_update_0_write9_merged_banks_3;
};



inline void input_input_update_0_write0_write(hw_uint<16>& input_input_update_0_write0, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write0_merged_banks_3.push(input_input_update_0_write0);
}

inline void input_input_update_0_write1_write(hw_uint<16>& input_input_update_0_write1, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write1_merged_banks_3.push(input_input_update_0_write1);
}

inline void input_input_update_0_write10_write(hw_uint<16>& input_input_update_0_write10, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write10_merged_banks_3.push(input_input_update_0_write10);
}

inline void input_input_update_0_write11_write(hw_uint<16>& input_input_update_0_write11, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write11_merged_banks_3.push(input_input_update_0_write11);
}

inline void input_input_update_0_write12_write(hw_uint<16>& input_input_update_0_write12, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write12_merged_banks_3.push(input_input_update_0_write12);
}

inline void input_input_update_0_write13_write(hw_uint<16>& input_input_update_0_write13, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write13_merged_banks_3.push(input_input_update_0_write13);
}

inline void input_input_update_0_write14_write(hw_uint<16>& input_input_update_0_write14, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write14_merged_banks_3.push(input_input_update_0_write14);
}

inline void input_input_update_0_write15_write(hw_uint<16>& input_input_update_0_write15, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write15_merged_banks_3.push(input_input_update_0_write15);
}

inline void input_input_update_0_write2_write(hw_uint<16>& input_input_update_0_write2, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write2_merged_banks_3.push(input_input_update_0_write2);
}

inline void input_input_update_0_write3_write(hw_uint<16>& input_input_update_0_write3, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write3_merged_banks_3.push(input_input_update_0_write3);
}

inline void input_input_update_0_write4_write(hw_uint<16>& input_input_update_0_write4, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write4_merged_banks_3.push(input_input_update_0_write4);
}

inline void input_input_update_0_write5_write(hw_uint<16>& input_input_update_0_write5, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write5_merged_banks_3.push(input_input_update_0_write5);
}

inline void input_input_update_0_write6_write(hw_uint<16>& input_input_update_0_write6, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write6_merged_banks_3.push(input_input_update_0_write6);
}

inline void input_input_update_0_write7_write(hw_uint<16>& input_input_update_0_write7, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write7_merged_banks_3.push(input_input_update_0_write7);
}

inline void input_input_update_0_write8_write(hw_uint<16>& input_input_update_0_write8, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write8_merged_banks_3.push(input_input_update_0_write8);
}

inline void input_input_update_0_write9_write(hw_uint<16>& input_input_update_0_write9, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write9_merged_banks_3.push(input_input_update_0_write9);
}

inline hw_uint<16> blurx_rd0_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd0 read pattern: { blurx_update_0[d0, d1] -> input[16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 242 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (122 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 242 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write0 = input.input_input_update_0_write0_merged_banks_3.peek_242();
  return value_input_input_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd1_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd1 read pattern: { blurx_update_0[d0, d1] -> input[16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 121 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (1 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 121 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write0 = input.input_input_update_0_write0_merged_banks_3.peek_121();
  return value_input_input_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd10_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd10 read pattern: { blurx_update_0[d0, d1] -> input[3 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 121 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (1 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 121 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write3 = input.input_input_update_0_write3_merged_banks_3.peek_121();
  return value_input_input_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd11_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd11 read pattern: { blurx_update_0[d0, d1] -> input[3 + 16d0, 2 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_input_input_update_0_write3 = input.input_input_update_0_write3_merged_banks_3.peek_0();
  return value_input_input_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd12_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd12 read pattern: { blurx_update_0[d0, d1] -> input[4 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 242 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (122 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 242 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write4 = input.input_input_update_0_write4_merged_banks_3.peek_242();
  return value_input_input_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd13_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd13 read pattern: { blurx_update_0[d0, d1] -> input[4 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 121 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (1 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 121 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write4 = input.input_input_update_0_write4_merged_banks_3.peek_121();
  return value_input_input_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd14_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd14 read pattern: { blurx_update_0[d0, d1] -> input[4 + 16d0, 2 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_input_input_update_0_write4 = input.input_input_update_0_write4_merged_banks_3.peek_0();
  return value_input_input_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd15_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd15 read pattern: { blurx_update_0[d0, d1] -> input[5 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 242 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (122 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 242 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write5 = input.input_input_update_0_write5_merged_banks_3.peek_242();
  return value_input_input_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd16_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd16 read pattern: { blurx_update_0[d0, d1] -> input[5 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 121 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (1 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 121 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write5 = input.input_input_update_0_write5_merged_banks_3.peek_121();
  return value_input_input_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd17_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd17 read pattern: { blurx_update_0[d0, d1] -> input[5 + 16d0, 2 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_input_input_update_0_write5 = input.input_input_update_0_write5_merged_banks_3.peek_0();
  return value_input_input_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd18_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd18 read pattern: { blurx_update_0[d0, d1] -> input[6 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 242 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (122 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 242 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write6 = input.input_input_update_0_write6_merged_banks_3.peek_242();
  return value_input_input_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd19_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd19 read pattern: { blurx_update_0[d0, d1] -> input[6 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 121 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (1 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 121 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write6 = input.input_input_update_0_write6_merged_banks_3.peek_121();
  return value_input_input_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd2_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd2 read pattern: { blurx_update_0[d0, d1] -> input[16d0, 2 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_input_input_update_0_write0 = input.input_input_update_0_write0_merged_banks_3.peek_0();
  return value_input_input_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd20_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd20 read pattern: { blurx_update_0[d0, d1] -> input[6 + 16d0, 2 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_input_input_update_0_write6 = input.input_input_update_0_write6_merged_banks_3.peek_0();
  return value_input_input_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd21_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd21 read pattern: { blurx_update_0[d0, d1] -> input[7 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 242 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (122 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 242 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write7 = input.input_input_update_0_write7_merged_banks_3.peek_242();
  return value_input_input_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd22_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd22 read pattern: { blurx_update_0[d0, d1] -> input[7 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 121 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (1 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 121 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write7 = input.input_input_update_0_write7_merged_banks_3.peek_121();
  return value_input_input_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd23_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd23 read pattern: { blurx_update_0[d0, d1] -> input[7 + 16d0, 2 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_input_input_update_0_write7 = input.input_input_update_0_write7_merged_banks_3.peek_0();
  return value_input_input_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd24_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd24 read pattern: { blurx_update_0[d0, d1] -> input[8 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 242 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (122 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 242 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write8 = input.input_input_update_0_write8_merged_banks_3.peek_242();
  return value_input_input_update_0_write8;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd25_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd25 read pattern: { blurx_update_0[d0, d1] -> input[8 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 121 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (1 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 121 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write8 = input.input_input_update_0_write8_merged_banks_3.peek_121();
  return value_input_input_update_0_write8;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd26_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd26 read pattern: { blurx_update_0[d0, d1] -> input[8 + 16d0, 2 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_input_input_update_0_write8 = input.input_input_update_0_write8_merged_banks_3.peek_0();
  return value_input_input_update_0_write8;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd27_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd27 read pattern: { blurx_update_0[d0, d1] -> input[9 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 242 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (122 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 242 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write9 = input.input_input_update_0_write9_merged_banks_3.peek_242();
  return value_input_input_update_0_write9;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd28_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd28 read pattern: { blurx_update_0[d0, d1] -> input[9 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 121 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (1 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 121 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write9 = input.input_input_update_0_write9_merged_banks_3.peek_121();
  return value_input_input_update_0_write9;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd29_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd29 read pattern: { blurx_update_0[d0, d1] -> input[9 + 16d0, 2 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_input_input_update_0_write9 = input.input_input_update_0_write9_merged_banks_3.peek_0();
  return value_input_input_update_0_write9;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd3_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd3 read pattern: { blurx_update_0[d0, d1] -> input[1 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 242 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (122 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 242 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write1 = input.input_input_update_0_write1_merged_banks_3.peek_242();
  return value_input_input_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd30_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd30 read pattern: { blurx_update_0[d0, d1] -> input[10 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 242 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (122 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 242 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write10 = input.input_input_update_0_write10_merged_banks_3.peek_242();
  return value_input_input_update_0_write10;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd31_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd31 read pattern: { blurx_update_0[d0, d1] -> input[10 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 121 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (1 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 121 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write10 = input.input_input_update_0_write10_merged_banks_3.peek_121();
  return value_input_input_update_0_write10;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd32_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd32 read pattern: { blurx_update_0[d0, d1] -> input[10 + 16d0, 2 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_input_input_update_0_write10 = input.input_input_update_0_write10_merged_banks_3.peek_0();
  return value_input_input_update_0_write10;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd33_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd33 read pattern: { blurx_update_0[d0, d1] -> input[11 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 242 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (122 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 242 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write11 = input.input_input_update_0_write11_merged_banks_3.peek_242();
  return value_input_input_update_0_write11;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd34_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd34 read pattern: { blurx_update_0[d0, d1] -> input[11 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 121 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (1 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 121 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write11 = input.input_input_update_0_write11_merged_banks_3.peek_121();
  return value_input_input_update_0_write11;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd35_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd35 read pattern: { blurx_update_0[d0, d1] -> input[11 + 16d0, 2 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_input_input_update_0_write11 = input.input_input_update_0_write11_merged_banks_3.peek_0();
  return value_input_input_update_0_write11;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd36_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd36 read pattern: { blurx_update_0[d0, d1] -> input[12 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 242 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (122 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 242 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write12 = input.input_input_update_0_write12_merged_banks_3.peek_242();
  return value_input_input_update_0_write12;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd37_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd37 read pattern: { blurx_update_0[d0, d1] -> input[12 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 121 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (1 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 121 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write12 = input.input_input_update_0_write12_merged_banks_3.peek_121();
  return value_input_input_update_0_write12;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd38_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd38 read pattern: { blurx_update_0[d0, d1] -> input[12 + 16d0, 2 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_input_input_update_0_write12 = input.input_input_update_0_write12_merged_banks_3.peek_0();
  return value_input_input_update_0_write12;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd39_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd39 read pattern: { blurx_update_0[d0, d1] -> input[13 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 242 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (122 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 242 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write13 = input.input_input_update_0_write13_merged_banks_3.peek_242();
  return value_input_input_update_0_write13;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd4_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd4 read pattern: { blurx_update_0[d0, d1] -> input[1 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 121 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (1 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 121 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write1 = input.input_input_update_0_write1_merged_banks_3.peek_121();
  return value_input_input_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd40_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd40 read pattern: { blurx_update_0[d0, d1] -> input[13 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 121 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (1 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 121 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write13 = input.input_input_update_0_write13_merged_banks_3.peek_121();
  return value_input_input_update_0_write13;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd41_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd41 read pattern: { blurx_update_0[d0, d1] -> input[13 + 16d0, 2 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_input_input_update_0_write13 = input.input_input_update_0_write13_merged_banks_3.peek_0();
  return value_input_input_update_0_write13;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd42_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd42 read pattern: { blurx_update_0[d0, d1] -> input[14 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 242 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (122 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 242 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write14 = input.input_input_update_0_write14_merged_banks_3.peek_242();
  return value_input_input_update_0_write14;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd43_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd43 read pattern: { blurx_update_0[d0, d1] -> input[14 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 121 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (1 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 121 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write14 = input.input_input_update_0_write14_merged_banks_3.peek_121();
  return value_input_input_update_0_write14;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd44_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd44 read pattern: { blurx_update_0[d0, d1] -> input[14 + 16d0, 2 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_input_input_update_0_write14 = input.input_input_update_0_write14_merged_banks_3.peek_0();
  return value_input_input_update_0_write14;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd45_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd45 read pattern: { blurx_update_0[d0, d1] -> input[15 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 242 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (122 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 242 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write15 = input.input_input_update_0_write15_merged_banks_3.peek_242();
  return value_input_input_update_0_write15;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd46_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd46 read pattern: { blurx_update_0[d0, d1] -> input[15 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 121 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (1 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 121 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write15 = input.input_input_update_0_write15_merged_banks_3.peek_121();
  return value_input_input_update_0_write15;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd47_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd47 read pattern: { blurx_update_0[d0, d1] -> input[15 + 16d0, 2 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_input_input_update_0_write15 = input.input_input_update_0_write15_merged_banks_3.peek_0();
  return value_input_input_update_0_write15;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd5_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd5 read pattern: { blurx_update_0[d0, d1] -> input[1 + 16d0, 2 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_input_input_update_0_write1 = input.input_input_update_0_write1_merged_banks_3.peek_0();
  return value_input_input_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd6_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd6 read pattern: { blurx_update_0[d0, d1] -> input[2 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 242 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (122 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 242 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write2 = input.input_input_update_0_write2_merged_banks_3.peek_242();
  return value_input_input_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd7_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd7 read pattern: { blurx_update_0[d0, d1] -> input[2 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 121 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (1 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 121 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write2 = input.input_input_update_0_write2_merged_banks_3.peek_121();
  return value_input_input_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd8_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd8 read pattern: { blurx_update_0[d0, d1] -> input[2 + 16d0, 2 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_input_input_update_0_write2 = input.input_input_update_0_write2_merged_banks_3.peek_0();
  return value_input_input_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd9_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd9 read pattern: { blurx_update_0[d0, d1] -> input[3 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 242 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (122 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 242 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write3 = input.input_input_update_0_write3_merged_banks_3.peek_242();
  return value_input_input_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// blurx_update_0_read
//	blurx_rd0
//	blurx_rd1
//	blurx_rd2
//	blurx_rd3
//	blurx_rd4
//	blurx_rd5
//	blurx_rd6
//	blurx_rd7
//	blurx_rd8
//	blurx_rd9
//	blurx_rd10
//	blurx_rd11
//	blurx_rd12
//	blurx_rd13
//	blurx_rd14
//	blurx_rd15
//	blurx_rd16
//	blurx_rd17
//	blurx_rd18
//	blurx_rd19
//	blurx_rd20
//	blurx_rd21
//	blurx_rd22
//	blurx_rd23
//	blurx_rd24
//	blurx_rd25
//	blurx_rd26
//	blurx_rd27
//	blurx_rd28
//	blurx_rd29
//	blurx_rd30
//	blurx_rd31
//	blurx_rd32
//	blurx_rd33
//	blurx_rd34
//	blurx_rd35
//	blurx_rd36
//	blurx_rd37
//	blurx_rd38
//	blurx_rd39
//	blurx_rd40
//	blurx_rd41
//	blurx_rd42
//	blurx_rd43
//	blurx_rd44
//	blurx_rd45
//	blurx_rd46
//	blurx_rd47
inline hw_uint<768> input_blurx_update_0_read_bundle_read(input_cache& input, int d0, int d1) {
  // # of ports in bundle: 48
    // blurx_rd0
    // blurx_rd1
    // blurx_rd2
    // blurx_rd3
    // blurx_rd4
    // blurx_rd5
    // blurx_rd6
    // blurx_rd7
    // blurx_rd8
    // blurx_rd9
    // blurx_rd10
    // blurx_rd11
    // blurx_rd12
    // blurx_rd13
    // blurx_rd14
    // blurx_rd15
    // blurx_rd16
    // blurx_rd17
    // blurx_rd18
    // blurx_rd19
    // blurx_rd20
    // blurx_rd21
    // blurx_rd22
    // blurx_rd23
    // blurx_rd24
    // blurx_rd25
    // blurx_rd26
    // blurx_rd27
    // blurx_rd28
    // blurx_rd29
    // blurx_rd30
    // blurx_rd31
    // blurx_rd32
    // blurx_rd33
    // blurx_rd34
    // blurx_rd35
    // blurx_rd36
    // blurx_rd37
    // blurx_rd38
    // blurx_rd39
    // blurx_rd40
    // blurx_rd41
    // blurx_rd42
    // blurx_rd43
    // blurx_rd44
    // blurx_rd45
    // blurx_rd46
    // blurx_rd47

	hw_uint<768> result;
	hw_uint<16> blurx_rd0_res = blurx_rd0_select(input, d0, d1);
	set_at<0, 768>(result, blurx_rd0_res);
	hw_uint<16> blurx_rd1_res = blurx_rd1_select(input, d0, d1);
	set_at<16, 768>(result, blurx_rd1_res);
	hw_uint<16> blurx_rd2_res = blurx_rd2_select(input, d0, d1);
	set_at<32, 768>(result, blurx_rd2_res);
	hw_uint<16> blurx_rd3_res = blurx_rd3_select(input, d0, d1);
	set_at<48, 768>(result, blurx_rd3_res);
	hw_uint<16> blurx_rd4_res = blurx_rd4_select(input, d0, d1);
	set_at<64, 768>(result, blurx_rd4_res);
	hw_uint<16> blurx_rd5_res = blurx_rd5_select(input, d0, d1);
	set_at<80, 768>(result, blurx_rd5_res);
	hw_uint<16> blurx_rd6_res = blurx_rd6_select(input, d0, d1);
	set_at<96, 768>(result, blurx_rd6_res);
	hw_uint<16> blurx_rd7_res = blurx_rd7_select(input, d0, d1);
	set_at<112, 768>(result, blurx_rd7_res);
	hw_uint<16> blurx_rd8_res = blurx_rd8_select(input, d0, d1);
	set_at<128, 768>(result, blurx_rd8_res);
	hw_uint<16> blurx_rd9_res = blurx_rd9_select(input, d0, d1);
	set_at<144, 768>(result, blurx_rd9_res);
	hw_uint<16> blurx_rd10_res = blurx_rd10_select(input, d0, d1);
	set_at<160, 768>(result, blurx_rd10_res);
	hw_uint<16> blurx_rd11_res = blurx_rd11_select(input, d0, d1);
	set_at<176, 768>(result, blurx_rd11_res);
	hw_uint<16> blurx_rd12_res = blurx_rd12_select(input, d0, d1);
	set_at<192, 768>(result, blurx_rd12_res);
	hw_uint<16> blurx_rd13_res = blurx_rd13_select(input, d0, d1);
	set_at<208, 768>(result, blurx_rd13_res);
	hw_uint<16> blurx_rd14_res = blurx_rd14_select(input, d0, d1);
	set_at<224, 768>(result, blurx_rd14_res);
	hw_uint<16> blurx_rd15_res = blurx_rd15_select(input, d0, d1);
	set_at<240, 768>(result, blurx_rd15_res);
	hw_uint<16> blurx_rd16_res = blurx_rd16_select(input, d0, d1);
	set_at<256, 768>(result, blurx_rd16_res);
	hw_uint<16> blurx_rd17_res = blurx_rd17_select(input, d0, d1);
	set_at<272, 768>(result, blurx_rd17_res);
	hw_uint<16> blurx_rd18_res = blurx_rd18_select(input, d0, d1);
	set_at<288, 768>(result, blurx_rd18_res);
	hw_uint<16> blurx_rd19_res = blurx_rd19_select(input, d0, d1);
	set_at<304, 768>(result, blurx_rd19_res);
	hw_uint<16> blurx_rd20_res = blurx_rd20_select(input, d0, d1);
	set_at<320, 768>(result, blurx_rd20_res);
	hw_uint<16> blurx_rd21_res = blurx_rd21_select(input, d0, d1);
	set_at<336, 768>(result, blurx_rd21_res);
	hw_uint<16> blurx_rd22_res = blurx_rd22_select(input, d0, d1);
	set_at<352, 768>(result, blurx_rd22_res);
	hw_uint<16> blurx_rd23_res = blurx_rd23_select(input, d0, d1);
	set_at<368, 768>(result, blurx_rd23_res);
	hw_uint<16> blurx_rd24_res = blurx_rd24_select(input, d0, d1);
	set_at<384, 768>(result, blurx_rd24_res);
	hw_uint<16> blurx_rd25_res = blurx_rd25_select(input, d0, d1);
	set_at<400, 768>(result, blurx_rd25_res);
	hw_uint<16> blurx_rd26_res = blurx_rd26_select(input, d0, d1);
	set_at<416, 768>(result, blurx_rd26_res);
	hw_uint<16> blurx_rd27_res = blurx_rd27_select(input, d0, d1);
	set_at<432, 768>(result, blurx_rd27_res);
	hw_uint<16> blurx_rd28_res = blurx_rd28_select(input, d0, d1);
	set_at<448, 768>(result, blurx_rd28_res);
	hw_uint<16> blurx_rd29_res = blurx_rd29_select(input, d0, d1);
	set_at<464, 768>(result, blurx_rd29_res);
	hw_uint<16> blurx_rd30_res = blurx_rd30_select(input, d0, d1);
	set_at<480, 768>(result, blurx_rd30_res);
	hw_uint<16> blurx_rd31_res = blurx_rd31_select(input, d0, d1);
	set_at<496, 768>(result, blurx_rd31_res);
	hw_uint<16> blurx_rd32_res = blurx_rd32_select(input, d0, d1);
	set_at<512, 768>(result, blurx_rd32_res);
	hw_uint<16> blurx_rd33_res = blurx_rd33_select(input, d0, d1);
	set_at<528, 768>(result, blurx_rd33_res);
	hw_uint<16> blurx_rd34_res = blurx_rd34_select(input, d0, d1);
	set_at<544, 768>(result, blurx_rd34_res);
	hw_uint<16> blurx_rd35_res = blurx_rd35_select(input, d0, d1);
	set_at<560, 768>(result, blurx_rd35_res);
	hw_uint<16> blurx_rd36_res = blurx_rd36_select(input, d0, d1);
	set_at<576, 768>(result, blurx_rd36_res);
	hw_uint<16> blurx_rd37_res = blurx_rd37_select(input, d0, d1);
	set_at<592, 768>(result, blurx_rd37_res);
	hw_uint<16> blurx_rd38_res = blurx_rd38_select(input, d0, d1);
	set_at<608, 768>(result, blurx_rd38_res);
	hw_uint<16> blurx_rd39_res = blurx_rd39_select(input, d0, d1);
	set_at<624, 768>(result, blurx_rd39_res);
	hw_uint<16> blurx_rd40_res = blurx_rd40_select(input, d0, d1);
	set_at<640, 768>(result, blurx_rd40_res);
	hw_uint<16> blurx_rd41_res = blurx_rd41_select(input, d0, d1);
	set_at<656, 768>(result, blurx_rd41_res);
	hw_uint<16> blurx_rd42_res = blurx_rd42_select(input, d0, d1);
	set_at<672, 768>(result, blurx_rd42_res);
	hw_uint<16> blurx_rd43_res = blurx_rd43_select(input, d0, d1);
	set_at<688, 768>(result, blurx_rd43_res);
	hw_uint<16> blurx_rd44_res = blurx_rd44_select(input, d0, d1);
	set_at<704, 768>(result, blurx_rd44_res);
	hw_uint<16> blurx_rd45_res = blurx_rd45_select(input, d0, d1);
	set_at<720, 768>(result, blurx_rd45_res);
	hw_uint<16> blurx_rd46_res = blurx_rd46_select(input, d0, d1);
	set_at<736, 768>(result, blurx_rd46_res);
	hw_uint<16> blurx_rd47_res = blurx_rd47_select(input, d0, d1);
	set_at<752, 768>(result, blurx_rd47_res);
	return result;
}

// input_update_0_write
//	input_input_update_0_write0
//	input_input_update_0_write1
//	input_input_update_0_write2
//	input_input_update_0_write3
//	input_input_update_0_write4
//	input_input_update_0_write5
//	input_input_update_0_write6
//	input_input_update_0_write7
//	input_input_update_0_write8
//	input_input_update_0_write9
//	input_input_update_0_write10
//	input_input_update_0_write11
//	input_input_update_0_write12
//	input_input_update_0_write13
//	input_input_update_0_write14
//	input_input_update_0_write15
inline void input_input_update_0_write_bundle_write(hw_uint<256>& input_update_0_write, input_cache& input, int d0, int d1) {
	hw_uint<16> input_input_update_0_write0_res = input_update_0_write.extract<0, 15>();
	input_input_update_0_write0_write(input_input_update_0_write0_res, input, d0, d1);
	hw_uint<16> input_input_update_0_write1_res = input_update_0_write.extract<16, 31>();
	input_input_update_0_write1_write(input_input_update_0_write1_res, input, d0, d1);
	hw_uint<16> input_input_update_0_write2_res = input_update_0_write.extract<32, 47>();
	input_input_update_0_write2_write(input_input_update_0_write2_res, input, d0, d1);
	hw_uint<16> input_input_update_0_write3_res = input_update_0_write.extract<48, 63>();
	input_input_update_0_write3_write(input_input_update_0_write3_res, input, d0, d1);
	hw_uint<16> input_input_update_0_write4_res = input_update_0_write.extract<64, 79>();
	input_input_update_0_write4_write(input_input_update_0_write4_res, input, d0, d1);
	hw_uint<16> input_input_update_0_write5_res = input_update_0_write.extract<80, 95>();
	input_input_update_0_write5_write(input_input_update_0_write5_res, input, d0, d1);
	hw_uint<16> input_input_update_0_write6_res = input_update_0_write.extract<96, 111>();
	input_input_update_0_write6_write(input_input_update_0_write6_res, input, d0, d1);
	hw_uint<16> input_input_update_0_write7_res = input_update_0_write.extract<112, 127>();
	input_input_update_0_write7_write(input_input_update_0_write7_res, input, d0, d1);
	hw_uint<16> input_input_update_0_write8_res = input_update_0_write.extract<128, 143>();
	input_input_update_0_write8_write(input_input_update_0_write8_res, input, d0, d1);
	hw_uint<16> input_input_update_0_write9_res = input_update_0_write.extract<144, 159>();
	input_input_update_0_write9_write(input_input_update_0_write9_res, input, d0, d1);
	hw_uint<16> input_input_update_0_write10_res = input_update_0_write.extract<160, 175>();
	input_input_update_0_write10_write(input_input_update_0_write10_res, input, d0, d1);
	hw_uint<16> input_input_update_0_write11_res = input_update_0_write.extract<176, 191>();
	input_input_update_0_write11_write(input_input_update_0_write11_res, input, d0, d1);
	hw_uint<16> input_input_update_0_write12_res = input_update_0_write.extract<192, 207>();
	input_input_update_0_write12_write(input_input_update_0_write12_res, input, d0, d1);
	hw_uint<16> input_input_update_0_write13_res = input_update_0_write.extract<208, 223>();
	input_input_update_0_write13_write(input_input_update_0_write13_res, input, d0, d1);
	hw_uint<16> input_input_update_0_write14_res = input_update_0_write.extract<224, 239>();
	input_input_update_0_write14_write(input_input_update_0_write14_res, input, d0, d1);
	hw_uint<16> input_input_update_0_write15_res = input_update_0_write.extract<240, 255>();
	input_input_update_0_write15_write(input_input_update_0_write15_res, input, d0, d1);
}



// Operation logic
inline void blurx_update_0(input_cache& input, blurx_cache& blurx, int d0, int d1) {
	// Consume: input
	auto input_0_c__0_value = input_blurx_update_0_read_bundle_read(input/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "blurx_update_0_input," << d0<< "," << d1<< "," <<  input_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = blurx_generated_compute_unrolled_16(input_0_c__0_value);
	// Produce: blurx
	blurx_blurx_update_0_write_bundle_write(compute_result, blurx, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<256> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  hw_uint<16> debug_compute_result_lane_4;
  set_at<0, 16, 16>(debug_compute_result_lane_4, debug_compute_result.extract<64, 79>());
  hw_uint<16> debug_compute_result_lane_5;
  set_at<0, 16, 16>(debug_compute_result_lane_5, debug_compute_result.extract<80, 95>());
  hw_uint<16> debug_compute_result_lane_6;
  set_at<0, 16, 16>(debug_compute_result_lane_6, debug_compute_result.extract<96, 111>());
  hw_uint<16> debug_compute_result_lane_7;
  set_at<0, 16, 16>(debug_compute_result_lane_7, debug_compute_result.extract<112, 127>());
  hw_uint<16> debug_compute_result_lane_8;
  set_at<0, 16, 16>(debug_compute_result_lane_8, debug_compute_result.extract<128, 143>());
  hw_uint<16> debug_compute_result_lane_9;
  set_at<0, 16, 16>(debug_compute_result_lane_9, debug_compute_result.extract<144, 159>());
  hw_uint<16> debug_compute_result_lane_10;
  set_at<0, 16, 16>(debug_compute_result_lane_10, debug_compute_result.extract<160, 175>());
  hw_uint<16> debug_compute_result_lane_11;
  set_at<0, 16, 16>(debug_compute_result_lane_11, debug_compute_result.extract<176, 191>());
  hw_uint<16> debug_compute_result_lane_12;
  set_at<0, 16, 16>(debug_compute_result_lane_12, debug_compute_result.extract<192, 207>());
  hw_uint<16> debug_compute_result_lane_13;
  set_at<0, 16, 16>(debug_compute_result_lane_13, debug_compute_result.extract<208, 223>());
  hw_uint<16> debug_compute_result_lane_14;
  set_at<0, 16, 16>(debug_compute_result_lane_14, debug_compute_result.extract<224, 239>());
  hw_uint<16> debug_compute_result_lane_15;
  set_at<0, 16, 16>(debug_compute_result_lane_15, debug_compute_result.extract<240, 255>());
  *global_debug_handle << "blurx_update_0," << (16*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "blurx_update_0," << (16*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "blurx_update_0," << (16*d0 + 2) << ", " << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "blurx_update_0," << (16*d0 + 3) << ", " << d1<< "," <<  debug_compute_result_lane_3 << endl;
  *global_debug_handle << "blurx_update_0," << (16*d0 + 4) << ", " << d1<< "," <<  debug_compute_result_lane_4 << endl;
  *global_debug_handle << "blurx_update_0," << (16*d0 + 5) << ", " << d1<< "," <<  debug_compute_result_lane_5 << endl;
  *global_debug_handle << "blurx_update_0," << (16*d0 + 6) << ", " << d1<< "," <<  debug_compute_result_lane_6 << endl;
  *global_debug_handle << "blurx_update_0," << (16*d0 + 7) << ", " << d1<< "," <<  debug_compute_result_lane_7 << endl;
  *global_debug_handle << "blurx_update_0," << (16*d0 + 8) << ", " << d1<< "," <<  debug_compute_result_lane_8 << endl;
  *global_debug_handle << "blurx_update_0," << (16*d0 + 9) << ", " << d1<< "," <<  debug_compute_result_lane_9 << endl;
  *global_debug_handle << "blurx_update_0," << (16*d0 + 10) << ", " << d1<< "," <<  debug_compute_result_lane_10 << endl;
  *global_debug_handle << "blurx_update_0," << (16*d0 + 11) << ", " << d1<< "," <<  debug_compute_result_lane_11 << endl;
  *global_debug_handle << "blurx_update_0," << (16*d0 + 12) << ", " << d1<< "," <<  debug_compute_result_lane_12 << endl;
  *global_debug_handle << "blurx_update_0," << (16*d0 + 13) << ", " << d1<< "," <<  debug_compute_result_lane_13 << endl;
  *global_debug_handle << "blurx_update_0," << (16*d0 + 14) << ", " << d1<< "," <<  debug_compute_result_lane_14 << endl;
  *global_debug_handle << "blurx_update_0," << (16*d0 + 15) << ", " << d1<< "," <<  debug_compute_result_lane_15 << endl;
#endif //__VIVADO_SYNTH__
}

inline void blur_xy_16_unrolled_16_update_0(blurx_cache& blurx, HWStream<hw_uint<256> >& /* buffer_args num ports = 16 */blur_xy_16_unrolled_16, int d0, int d1) {
	// Consume: blurx
	auto blurx_0_c__0_value = blurx_blur_xy_16_unrolled_16_update_0_read_bundle_read(blurx/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "blur_xy_16_unrolled_16_update_0_blurx," << d0<< "," << d1<< "," <<  blurx_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = blur_xy_16_unrolled_16_generated_compute_unrolled_16(blurx_0_c__0_value);
	// Produce: blur_xy_16_unrolled_16
	blur_xy_16_unrolled_16.write(compute_result);
#ifndef __VIVADO_SYNTH__
  hw_uint<256> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  hw_uint<16> debug_compute_result_lane_4;
  set_at<0, 16, 16>(debug_compute_result_lane_4, debug_compute_result.extract<64, 79>());
  hw_uint<16> debug_compute_result_lane_5;
  set_at<0, 16, 16>(debug_compute_result_lane_5, debug_compute_result.extract<80, 95>());
  hw_uint<16> debug_compute_result_lane_6;
  set_at<0, 16, 16>(debug_compute_result_lane_6, debug_compute_result.extract<96, 111>());
  hw_uint<16> debug_compute_result_lane_7;
  set_at<0, 16, 16>(debug_compute_result_lane_7, debug_compute_result.extract<112, 127>());
  hw_uint<16> debug_compute_result_lane_8;
  set_at<0, 16, 16>(debug_compute_result_lane_8, debug_compute_result.extract<128, 143>());
  hw_uint<16> debug_compute_result_lane_9;
  set_at<0, 16, 16>(debug_compute_result_lane_9, debug_compute_result.extract<144, 159>());
  hw_uint<16> debug_compute_result_lane_10;
  set_at<0, 16, 16>(debug_compute_result_lane_10, debug_compute_result.extract<160, 175>());
  hw_uint<16> debug_compute_result_lane_11;
  set_at<0, 16, 16>(debug_compute_result_lane_11, debug_compute_result.extract<176, 191>());
  hw_uint<16> debug_compute_result_lane_12;
  set_at<0, 16, 16>(debug_compute_result_lane_12, debug_compute_result.extract<192, 207>());
  hw_uint<16> debug_compute_result_lane_13;
  set_at<0, 16, 16>(debug_compute_result_lane_13, debug_compute_result.extract<208, 223>());
  hw_uint<16> debug_compute_result_lane_14;
  set_at<0, 16, 16>(debug_compute_result_lane_14, debug_compute_result.extract<224, 239>());
  hw_uint<16> debug_compute_result_lane_15;
  set_at<0, 16, 16>(debug_compute_result_lane_15, debug_compute_result.extract<240, 255>());
  *global_debug_handle << "blur_xy_16_unrolled_16_update_0," << (16*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "blur_xy_16_unrolled_16_update_0," << (16*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "blur_xy_16_unrolled_16_update_0," << (16*d0 + 2) << ", " << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "blur_xy_16_unrolled_16_update_0," << (16*d0 + 3) << ", " << d1<< "," <<  debug_compute_result_lane_3 << endl;
  *global_debug_handle << "blur_xy_16_unrolled_16_update_0," << (16*d0 + 4) << ", " << d1<< "," <<  debug_compute_result_lane_4 << endl;
  *global_debug_handle << "blur_xy_16_unrolled_16_update_0," << (16*d0 + 5) << ", " << d1<< "," <<  debug_compute_result_lane_5 << endl;
  *global_debug_handle << "blur_xy_16_unrolled_16_update_0," << (16*d0 + 6) << ", " << d1<< "," <<  debug_compute_result_lane_6 << endl;
  *global_debug_handle << "blur_xy_16_unrolled_16_update_0," << (16*d0 + 7) << ", " << d1<< "," <<  debug_compute_result_lane_7 << endl;
  *global_debug_handle << "blur_xy_16_unrolled_16_update_0," << (16*d0 + 8) << ", " << d1<< "," <<  debug_compute_result_lane_8 << endl;
  *global_debug_handle << "blur_xy_16_unrolled_16_update_0," << (16*d0 + 9) << ", " << d1<< "," <<  debug_compute_result_lane_9 << endl;
  *global_debug_handle << "blur_xy_16_unrolled_16_update_0," << (16*d0 + 10) << ", " << d1<< "," <<  debug_compute_result_lane_10 << endl;
  *global_debug_handle << "blur_xy_16_unrolled_16_update_0," << (16*d0 + 11) << ", " << d1<< "," <<  debug_compute_result_lane_11 << endl;
  *global_debug_handle << "blur_xy_16_unrolled_16_update_0," << (16*d0 + 12) << ", " << d1<< "," <<  debug_compute_result_lane_12 << endl;
  *global_debug_handle << "blur_xy_16_unrolled_16_update_0," << (16*d0 + 13) << ", " << d1<< "," <<  debug_compute_result_lane_13 << endl;
  *global_debug_handle << "blur_xy_16_unrolled_16_update_0," << (16*d0 + 14) << ", " << d1<< "," <<  debug_compute_result_lane_14 << endl;
  *global_debug_handle << "blur_xy_16_unrolled_16_update_0," << (16*d0 + 15) << ", " << d1<< "," <<  debug_compute_result_lane_15 << endl;
#endif //__VIVADO_SYNTH__
}

inline void input_update_0(HWStream<hw_uint<256> >& /* buffer_args num ports = 16 */input_arg, input_cache& input, int d0, int d1) {
	// Consume: input_arg
	auto input_arg_0_c__0_value = input_arg.read();
	auto compute_result = input_generated_compute_unrolled_16(input_arg_0_c__0_value);
	// Produce: input
	input_input_update_0_write_bundle_write(compute_result, input, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<256> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  hw_uint<16> debug_compute_result_lane_4;
  set_at<0, 16, 16>(debug_compute_result_lane_4, debug_compute_result.extract<64, 79>());
  hw_uint<16> debug_compute_result_lane_5;
  set_at<0, 16, 16>(debug_compute_result_lane_5, debug_compute_result.extract<80, 95>());
  hw_uint<16> debug_compute_result_lane_6;
  set_at<0, 16, 16>(debug_compute_result_lane_6, debug_compute_result.extract<96, 111>());
  hw_uint<16> debug_compute_result_lane_7;
  set_at<0, 16, 16>(debug_compute_result_lane_7, debug_compute_result.extract<112, 127>());
  hw_uint<16> debug_compute_result_lane_8;
  set_at<0, 16, 16>(debug_compute_result_lane_8, debug_compute_result.extract<128, 143>());
  hw_uint<16> debug_compute_result_lane_9;
  set_at<0, 16, 16>(debug_compute_result_lane_9, debug_compute_result.extract<144, 159>());
  hw_uint<16> debug_compute_result_lane_10;
  set_at<0, 16, 16>(debug_compute_result_lane_10, debug_compute_result.extract<160, 175>());
  hw_uint<16> debug_compute_result_lane_11;
  set_at<0, 16, 16>(debug_compute_result_lane_11, debug_compute_result.extract<176, 191>());
  hw_uint<16> debug_compute_result_lane_12;
  set_at<0, 16, 16>(debug_compute_result_lane_12, debug_compute_result.extract<192, 207>());
  hw_uint<16> debug_compute_result_lane_13;
  set_at<0, 16, 16>(debug_compute_result_lane_13, debug_compute_result.extract<208, 223>());
  hw_uint<16> debug_compute_result_lane_14;
  set_at<0, 16, 16>(debug_compute_result_lane_14, debug_compute_result.extract<224, 239>());
  hw_uint<16> debug_compute_result_lane_15;
  set_at<0, 16, 16>(debug_compute_result_lane_15, debug_compute_result.extract<240, 255>());
  *global_debug_handle << "input_update_0," << (16*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "input_update_0," << (16*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "input_update_0," << (16*d0 + 2) << ", " << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "input_update_0," << (16*d0 + 3) << ", " << d1<< "," <<  debug_compute_result_lane_3 << endl;
  *global_debug_handle << "input_update_0," << (16*d0 + 4) << ", " << d1<< "," <<  debug_compute_result_lane_4 << endl;
  *global_debug_handle << "input_update_0," << (16*d0 + 5) << ", " << d1<< "," <<  debug_compute_result_lane_5 << endl;
  *global_debug_handle << "input_update_0," << (16*d0 + 6) << ", " << d1<< "," <<  debug_compute_result_lane_6 << endl;
  *global_debug_handle << "input_update_0," << (16*d0 + 7) << ", " << d1<< "," <<  debug_compute_result_lane_7 << endl;
  *global_debug_handle << "input_update_0," << (16*d0 + 8) << ", " << d1<< "," <<  debug_compute_result_lane_8 << endl;
  *global_debug_handle << "input_update_0," << (16*d0 + 9) << ", " << d1<< "," <<  debug_compute_result_lane_9 << endl;
  *global_debug_handle << "input_update_0," << (16*d0 + 10) << ", " << d1<< "," <<  debug_compute_result_lane_10 << endl;
  *global_debug_handle << "input_update_0," << (16*d0 + 11) << ", " << d1<< "," <<  debug_compute_result_lane_11 << endl;
  *global_debug_handle << "input_update_0," << (16*d0 + 12) << ", " << d1<< "," <<  debug_compute_result_lane_12 << endl;
  *global_debug_handle << "input_update_0," << (16*d0 + 13) << ", " << d1<< "," <<  debug_compute_result_lane_13 << endl;
  *global_debug_handle << "input_update_0," << (16*d0 + 14) << ", " << d1<< "," <<  debug_compute_result_lane_14 << endl;
  *global_debug_handle << "input_update_0," << (16*d0 + 15) << ", " << d1<< "," <<  debug_compute_result_lane_15 << endl;
#endif //__VIVADO_SYNTH__
}

// Driver function
void blur_xy_16_unrolled_16_opt(HWStream<hw_uint<256> >& /* get_args num ports = 16 */input_arg, HWStream<hw_uint<256> >& /* get_args num ports = 16 */blur_xy_16_unrolled_16) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("blur_xy_16_unrolled_16_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blurx_cache blurx;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  input_cache input;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
	#ifdef __VIVADO_SYNTH__
	#pragma HLS inline recursive
	#endif // __VIVADO_SYNTH__
	
	for (int c0 = 0; c0 <= 1081; c0++) {
	  for (int c1 = 0; c1 <= 120; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 120) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1081) && ((c0 - 0) % 1 == 0)) {
	input_update_0(input_arg, input, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 120) && ((c1 - 0) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
	blurx_update_0(input, blurx, (c1 - 0) / 1, (c0 - 2) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 120) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
	blur_xy_16_unrolled_16_update_0(blurx, blur_xy_16_unrolled_16, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

#ifdef __VIVADO_SYNTH__
#include "blur_xy_16_unrolled_16_opt.h"

#define INPUT_SIZE 2094752
#define OUTPUT_SIZE 2073600

extern "C" {

static void read_input(hw_uint<256>* input, HWStream<hw_uint<256> >& v, const int size) {
  for (int i = 0; i < INPUT_SIZE; i++) {
    #pragma HLS pipeline II=1
    v.write(input[i]);
  }
}

static void write_output(hw_uint<256>* output, HWStream<hw_uint<256> >& v, const int size) {
  for (int i = 0; i < OUTPUT_SIZE; i++) {
    #pragma HLS pipeline II=1
    output[i] = v.read();
  }
}

void blur_xy_16_unrolled_16_opt_accel(hw_uint<256>* input_update_0_read, hw_uint<256>* blur_xy_16_unrolled_16_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = input_update_0_read offset = slave bundle = gmem
#pragma HLS INTERFACE m_axi port = blur_xy_16_unrolled_16_update_0_write offset = slave bundle = gmem

#pragma HLS INTERFACE s_axilite port = input_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = blur_xy_16_unrolled_16_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<256> > input_update_0_read_channel;
  static HWStream<hw_uint<256> > blur_xy_16_unrolled_16_update_0_write_channel;

  read_input(input_update_0_read, input_update_0_read_channel, size);

  blur_xy_16_unrolled_16_opt(input_update_0_read_channel, blur_xy_16_unrolled_16_update_0_write_channel);

  write_output(blur_xy_16_unrolled_16_update_0_write, blur_xy_16_unrolled_16_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

