#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "dn_reconv_opt_compute_units.h"

#include "hw_classes.h"

struct diff_i_diff_i_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 8], [0, 7], [0, 7]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct diff_i_cache {
  diff_i_diff_i_update_0_write0_merged_banks_1_cache diff_i_diff_i_update_0_write0_merged_banks_1;
};



inline void diff_i_diff_i_update_0_write0_write(hw_uint<16>& diff_i_diff_i_update_0_write0, diff_i_cache& diff_i, int d0, int d1, int d2) {
  diff_i.diff_i_diff_i_update_0_write0_merged_banks_1.push(diff_i_diff_i_update_0_write0);
}

inline hw_uint<16> g_rd0_select(diff_i_cache& diff_i, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_rd0 read pattern: { g_update_0[d0, d1, d2] -> diff_i[d0, d1, d2] : 0 <= d0 <= 8 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Read schedule : { g_update_0[d0, d1, d2] -> [1 + d2, d1, d0, 8] : 0 <= d0 <= 8 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { diff_i_update_0[d0, d1, d2] -> [1 + d2, d1, d0, 6] : 0 <= d0 <= 8 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // DD fold: {  }
  auto value_diff_i_diff_i_update_0_write0 = diff_i.diff_i_diff_i_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_diff_i_diff_i_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// diff_i_update_0_write
//	diff_i_diff_i_update_0_write0
inline void diff_i_diff_i_update_0_write_bundle_write(hw_uint<16>& diff_i_update_0_write, diff_i_cache& diff_i, int d0, int d1, int d2) {
	hw_uint<16> diff_i_diff_i_update_0_write0_res = diff_i_update_0_write.extract<0, 15>();
	diff_i_diff_i_update_0_write0_write(diff_i_diff_i_update_0_write0_res, diff_i, d0, d1, d2);
}

// g_update_0_read
//	g_rd0
inline hw_uint<16> diff_i_g_update_0_read_bundle_read(diff_i_cache& diff_i, int d0, int d1, int d2) {
  // # of ports in bundle: 1
    // g_rd0

	hw_uint<16> result;
	hw_uint<16> g_rd0_res = g_rd0_select(diff_i, d0, d1, d2);
	set_at<0, 16>(result, g_rd0_res);
	return result;
}

#include "hw_classes.h"

struct diff_o_diff_o_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 8], [0, 7], [0, 7]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct diff_o_cache {
  diff_o_diff_o_update_0_write0_merged_banks_1_cache diff_o_diff_o_update_0_write0_merged_banks_1;
};



inline void diff_o_diff_o_update_0_write0_write(hw_uint<16>& diff_o_diff_o_update_0_write0, diff_o_cache& diff_o, int d0, int d1, int d2) {
  diff_o.diff_o_diff_o_update_0_write0_merged_banks_1.push(diff_o_diff_o_update_0_write0);
}

inline hw_uint<16> g_rd0_select(diff_o_cache& diff_o, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_rd0 read pattern: { g_update_0[d0, d1, d2] -> diff_o[d0, d1, d2] : 0 <= d0 <= 8 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Read schedule : { g_update_0[d0, d1, d2] -> [1 + d2, d1, d0, 8] : 0 <= d0 <= 8 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { diff_o_update_0[d0, d1, d2] -> [1 + d2, d1, d0, 5] : 0 <= d0 <= 8 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // DD fold: {  }
  auto value_diff_o_diff_o_update_0_write0 = diff_o.diff_o_diff_o_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_diff_o_diff_o_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// diff_o_update_0_write
//	diff_o_diff_o_update_0_write0
inline void diff_o_diff_o_update_0_write_bundle_write(hw_uint<16>& diff_o_update_0_write, diff_o_cache& diff_o, int d0, int d1, int d2) {
	hw_uint<16> diff_o_diff_o_update_0_write0_res = diff_o_update_0_write.extract<0, 15>();
	diff_o_diff_o_update_0_write0_write(diff_o_diff_o_update_0_write0_res, diff_o, d0, d1, d2);
}

// g_update_0_read
//	g_rd0
inline hw_uint<16> diff_o_g_update_0_read_bundle_read(diff_o_cache& diff_o, int d0, int d1, int d2) {
  // # of ports in bundle: 1
    // g_rd0

	hw_uint<16> result;
	hw_uint<16> g_rd0_res = g_rd0_select(diff_o, d0, d1, d2);
	set_at<0, 16>(result, g_rd0_res);
	return result;
}

#include "hw_classes.h"

struct f_f_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 7], [0, 7], [0, 7]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct f_cache {
  f_f_update_0_write0_merged_banks_1_cache f_f_update_0_write0_merged_banks_1;
};



inline void f_f_update_0_write0_write(hw_uint<16>& f_f_update_0_write0, f_cache& f, int d0, int d1, int d2) {
  f.f_f_update_0_write0_merged_banks_1.push(f_f_update_0_write0);
}

inline hw_uint<16> r0_rd0_select(f_cache& f, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // r0_rd0 read pattern: { r0_update_0[d0, d1, d2] -> f[d0, d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Read schedule : { r0_update_0[d0, d1, d2] -> [1 + d2, d1, d0, 4] : 0 <= d0 <= 7 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { f_update_0[d0, d1, d2] -> [1 + d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // DD fold: {  }
  auto value_f_f_update_0_write0 = f.f_f_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_f_f_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// f_update_0_write
//	f_f_update_0_write0
inline void f_f_update_0_write_bundle_write(hw_uint<16>& f_update_0_write, f_cache& f, int d0, int d1, int d2) {
	hw_uint<16> f_f_update_0_write0_res = f_update_0_write.extract<0, 15>();
	f_f_update_0_write0_write(f_f_update_0_write0_res, f, d0, d1, d2);
}

// r0_update_0_read
//	r0_rd0
inline hw_uint<16> f_r0_update_0_read_bundle_read(f_cache& f, int d0, int d1, int d2) {
  // # of ports in bundle: 1
    // r0_rd0

	hw_uint<16> result;
	hw_uint<16> r0_rd0_res = r0_rd0_select(f, d0, d1, d2);
	set_at<0, 16>(result, r0_rd0_res);
	return result;
}

#include "hw_classes.h"

struct g_g_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 8], [0, 7], [0, 7]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_cache {
  g_g_update_0_write0_merged_banks_1_cache g_g_update_0_write0_merged_banks_1;
};



inline void g_g_update_0_write0_write(hw_uint<16>& g_g_update_0_write0, g_cache& g, int d0, int d1, int d2) {
  g.g_g_update_0_write0_merged_banks_1.push(g_g_update_0_write0);
}

inline hw_uint<16> dn_reconv_rd0_select(g_cache& g, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dn_reconv_rd0 read pattern: { dn_reconv_update_0[d0, d1, d2] -> g[1 + d0, d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Read schedule : { dn_reconv_update_0[d0, d1, d2] -> [1 + d2, d1, 1 + d0, 9] : 0 <= d0 <= 7 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { g_update_0[d0, d1, d2] -> [1 + d2, d1, d0, 8] : 0 <= d0 <= 8 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // DD fold: {  }
  auto value_g_g_update_0_write0 = g.g_g_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_g_g_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dn_reconv_update_0_read
//	dn_reconv_rd0
inline hw_uint<16> g_dn_reconv_update_0_read_bundle_read(g_cache& g, int d0, int d1, int d2) {
  // # of ports in bundle: 1
    // dn_reconv_rd0

	hw_uint<16> result;
	hw_uint<16> dn_reconv_rd0_res = dn_reconv_rd0_select(g, d0, d1, d2);
	set_at<0, 16>(result, dn_reconv_rd0_res);
	return result;
}

// g_update_0_write
//	g_g_update_0_write0
inline void g_g_update_0_write_bundle_write(hw_uint<16>& g_update_0_write, g_cache& g, int d0, int d1, int d2) {
	hw_uint<16> g_g_update_0_write0_res = g_update_0_write.extract<0, 15>();
	g_g_update_0_write0_write(g_g_update_0_write0_res, g, d0, d1, d2);
}

#include "hw_classes.h"

struct r0_r0_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 7], [0, 7], [0, 7]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct r0_cache {
  r0_r0_update_0_write0_merged_banks_1_cache r0_r0_update_0_write0_merged_banks_1;
};



inline void r0_r0_update_0_write0_write(hw_uint<16>& r0_r0_update_0_write0, r0_cache& r0, int d0, int d1, int d2) {
  r0.r0_r0_update_0_write0_merged_banks_1.push(r0_r0_update_0_write0);
}

inline hw_uint<16> r1_rd0_select(r0_cache& r0, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // r1_rd0 read pattern: { r1_update_0[d0, d1, d2] -> r0[d0, d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Read schedule : { r1_update_0[d0, d1, d2] -> [1 + d2, d1, d0, 7] : 0 <= d0 <= 7 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { r0_update_0[d0, d1, d2] -> [1 + d2, d1, d0, 4] : 0 <= d0 <= 7 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // DD fold: {  }
  auto value_r0_r0_update_0_write0 = r0.r0_r0_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_r0_r0_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// r0_update_0_write
//	r0_r0_update_0_write0
inline void r0_r0_update_0_write_bundle_write(hw_uint<16>& r0_update_0_write, r0_cache& r0, int d0, int d1, int d2) {
	hw_uint<16> r0_r0_update_0_write0_res = r0_update_0_write.extract<0, 15>();
	r0_r0_update_0_write0_write(r0_r0_update_0_write0_res, r0, d0, d1, d2);
}

// r1_update_0_read
//	r1_rd0
inline hw_uint<16> r0_r1_update_0_read_bundle_read(r0_cache& r0, int d0, int d1, int d2) {
  // # of ports in bundle: 1
    // r1_rd0

	hw_uint<16> result;
	hw_uint<16> r1_rd0_res = r1_rd0_select(r0, d0, d1, d2);
	set_at<0, 16>(result, r1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct r1_r1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 7], [0, 7], [0, 7]}
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

struct r1_cache {
  r1_r1_update_0_write0_merged_banks_1_cache r1_r1_update_0_write0_merged_banks_1;
};



inline void r1_r1_update_0_write0_write(hw_uint<16>& r1_r1_update_0_write0, r1_cache& r1, int d0, int d1, int d2) {
  r1.r1_r1_update_0_write0_merged_banks_1.push(r1_r1_update_0_write0);
}

inline hw_uint<16> dn_reconv_rd0_select(r1_cache& r1, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dn_reconv_rd0 read pattern: { dn_reconv_update_0[d0, d1, d2] -> r1[d0, d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Read schedule : { dn_reconv_update_0[d0, d1, d2] -> [1 + d2, d1, 1 + d0, 9] : 0 <= d0 <= 7 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { r1_update_0[d0, d1, d2] -> [1 + d2, d1, d0, 7] : 0 <= d0 <= 7 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // DD fold: { dn_reconv_update_0[d0, d1, d2] -> 1 : 0 <= d0 <= 6 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  auto value_r1_r1_update_0_write0 = r1.r1_r1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ (6 - d0 >= 0) ? (1) : 0);
  return value_r1_r1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dn_reconv_update_0_read
//	dn_reconv_rd0
inline hw_uint<16> r1_dn_reconv_update_0_read_bundle_read(r1_cache& r1, int d0, int d1, int d2) {
  // # of ports in bundle: 1
    // dn_reconv_rd0

	hw_uint<16> result;
	hw_uint<16> dn_reconv_rd0_res = dn_reconv_rd0_select(r1, d0, d1, d2);
	set_at<0, 16>(result, dn_reconv_rd0_res);
	return result;
}

// r1_update_0_write
//	r1_r1_update_0_write0
inline void r1_r1_update_0_write_bundle_write(hw_uint<16>& r1_update_0_write, r1_cache& r1, int d0, int d1, int d2) {
	hw_uint<16> r1_r1_update_0_write0_res = r1_update_0_write.extract<0, 15>();
	r1_r1_update_0_write0_write(r1_r1_update_0_write0_res, r1, d0, d1, d2);
}

#include "hw_classes.h"

struct u_u_update_0_write0_merged_banks_6_cache {
	// RAM Box: {[0, 8], [0, 7], [-1, 8]}
	// Capacity: 145
	// # of read delays: 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 71> f1;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 70> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_71() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_72() {
		return f2;
	}

	inline hw_uint<16> peek_73() {
		return f4;
	}

	inline hw_uint<16> peek_143() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_144() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 70
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 70 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct u_cache {
  u_u_update_0_write0_merged_banks_6_cache u_u_update_0_write0_merged_banks_6;
};



inline void u_u_update_0_write0_write(hw_uint<16>& u_u_update_0_write0, u_cache& u, int d0, int d1, int d2) {
  u.u_u_update_0_write0_merged_banks_6.push(u_u_update_0_write0);
}

inline hw_uint<16> diff_i_rd0_select(u_cache& u, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_i_rd0 read pattern: { diff_i_update_0[d0, d1, d2] -> u[d0, d1, -1 + d2] : 0 <= d0 <= 8 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Read schedule : { diff_i_update_0[d0, d1, d2] -> [1 + d2, d1, d0, 6] : 0 <= d0 <= 8 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { u_update_0[d0, d1, d2] -> [d2, d1, d0, 3] : 0 <= d0 <= 8 and 0 <= d1 <= 7 and -1 <= d2 <= 8 }
  // DD fold: { diff_i_update_0[d0, d1, d2] -> 144 : 0 < d0 <= 7 and 0 < d1 <= 6 and 0 <= d2 <= 7; diff_i_update_0[d0, d1, d2] -> (136 + d0) : d0 = 8 and 0 < d1 <= 6 and 0 <= d2 <= 7; diff_i_update_0[d0, d1, d2] -> 144 : d1 = 7 and 0 < d0 <= 7 and 0 <= d2 <= 7; diff_i_update_0[d0, d1, d2] -> ((73 + d0) + 9 * d1) : d0 = 8 and d1 = 7 and 0 <= d2 <= 7; diff_i_update_0[d0, d1, d2] -> 144 : d0 = 0 and 0 < d1 <= 6 and 0 <= d2 <= 7; diff_i_update_0[d0, d1, d2] -> 144 : d0 = 0 and d1 = 7 and 0 <= d2 <= 7; diff_i_update_0[d0, d1, d2] -> 144 : d1 = 0 and 0 < d0 <= 7 and 0 <= d2 <= 7; diff_i_update_0[d0, d1, d2] -> (136 + d0) : d0 = 8 and d1 = 0 and 0 <= d2 <= 7; diff_i_update_0[d0, d1, d2] -> 144 : d0 = 0 and d1 = 0 and 0 <= d2 <= 7 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_6.peek_144();
  return value_u_u_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> diff_i_rd1_select(u_cache& u, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_i_rd1 read pattern: { diff_i_update_0[d0, d1, d2] -> u[d0, d1, d2] : 0 <= d0 <= 8 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Read schedule : { diff_i_update_0[d0, d1, d2] -> [1 + d2, d1, d0, 6] : 0 <= d0 <= 8 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { u_update_0[d0, d1, d2] -> [d2, d1, d0, 3] : 0 <= d0 <= 8 and 0 <= d1 <= 7 and -1 <= d2 <= 8 }
  // DD fold: { diff_i_update_0[d0, d1, d2] -> 72 : 0 < d0 <= 7 and 0 < d1 <= 6 and 0 <= d2 <= 7; diff_i_update_0[d0, d1, d2] -> (64 + d0) : d0 = 8 and 0 < d1 <= 6 and 0 <= d2 <= 7; diff_i_update_0[d0, d1, d2] -> 72 : d1 = 7 and 0 < d0 <= 7 and 0 <= d2 <= 7; diff_i_update_0[d0, d1, d2] -> ((1 + d0) + 9 * d1) : d0 = 8 and d1 = 7 and 0 <= d2 <= 7; diff_i_update_0[d0, d1, d2] -> 72 : d0 = 0 and 0 < d1 <= 6 and 0 <= d2 <= 7; diff_i_update_0[d0, d1, d2] -> 72 : d0 = 0 and d1 = 7 and 0 <= d2 <= 7; diff_i_update_0[d0, d1, d2] -> 72 : d1 = 0 and 0 < d0 <= 7 and 0 <= d2 <= 7; diff_i_update_0[d0, d1, d2] -> (64 + d0) : d0 = 8 and d1 = 0 and 0 <= d2 <= 7; diff_i_update_0[d0, d1, d2] -> 72 : d0 = 0 and d1 = 0 and 0 <= d2 <= 7 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_6.peek_72();
  return value_u_u_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> diff_o_rd0_select(u_cache& u, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_o_rd0 read pattern: { diff_o_update_0[d0, d1, d2] -> u[d0, d1, d2] : 0 <= d0 <= 8 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Read schedule : { diff_o_update_0[d0, d1, d2] -> [1 + d2, d1, d0, 5] : 0 <= d0 <= 8 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { u_update_0[d0, d1, d2] -> [d2, d1, d0, 3] : 0 <= d0 <= 8 and 0 <= d1 <= 7 and -1 <= d2 <= 8 }
  // DD fold: { diff_o_update_0[d0, d1, d2] -> 72 : 0 < d0 <= 7 and 0 < d1 <= 6 and 0 <= d2 <= 7; diff_o_update_0[d0, d1, d2] -> (64 + d0) : d0 = 8 and 0 < d1 <= 6 and 0 <= d2 <= 7; diff_o_update_0[d0, d1, d2] -> 72 : d1 = 7 and 0 < d0 <= 7 and 0 <= d2 <= 7; diff_o_update_0[d0, d1, d2] -> ((1 + d0) + 9 * d1) : d0 = 8 and d1 = 7 and 0 <= d2 <= 7; diff_o_update_0[d0, d1, d2] -> 72 : d0 = 0 and 0 < d1 <= 6 and 0 <= d2 <= 7; diff_o_update_0[d0, d1, d2] -> 72 : d0 = 0 and d1 = 7 and 0 <= d2 <= 7; diff_o_update_0[d0, d1, d2] -> 72 : d1 = 0 and 0 < d0 <= 7 and 0 <= d2 <= 7; diff_o_update_0[d0, d1, d2] -> (64 + d0) : d0 = 8 and d1 = 0 and 0 <= d2 <= 7; diff_o_update_0[d0, d1, d2] -> 72 : d0 = 0 and d1 = 0 and 0 <= d2 <= 7 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_6.peek_72();
  return value_u_u_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> diff_o_rd1_select(u_cache& u, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_o_rd1 read pattern: { diff_o_update_0[d0, d1, d2] -> u[d0, d1, 1 + d2] : 0 <= d0 <= 8 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Read schedule : { diff_o_update_0[d0, d1, d2] -> [1 + d2, d1, d0, 5] : 0 <= d0 <= 8 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { u_update_0[d0, d1, d2] -> [d2, d1, d0, 3] : 0 <= d0 <= 8 and 0 <= d1 <= 7 and -1 <= d2 <= 8 }
  // DD fold: {  }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_6.peek_0();
  return value_u_u_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dn_reconv_rd0_select(u_cache& u, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dn_reconv_rd0 read pattern: { dn_reconv_update_0[d0, d1, d2] -> u[d0, d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Read schedule : { dn_reconv_update_0[d0, d1, d2] -> [1 + d2, d1, 1 + d0, 9] : 0 <= d0 <= 7 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { u_update_0[d0, d1, d2] -> [d2, d1, d0, 3] : 0 <= d0 <= 8 and 0 <= d1 <= 7 and -1 <= d2 <= 8 }
  // DD fold: { dn_reconv_update_0[d0, d1, d2] -> 73 : 0 <= d0 <= 7 and 0 < d1 <= 6 and 0 <= d2 <= 7; dn_reconv_update_0[d0, d1, d2] -> 73 : d1 = 7 and 0 <= d0 <= 7 and 0 <= d2 <= 7; dn_reconv_update_0[d0, d1, d2] -> 73 : d1 = 0 and 0 <= d0 <= 7 and 0 <= d2 <= 7 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_6.peek_73();
  return value_u_u_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> r0_rd0_select(u_cache& u, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // r0_rd0 read pattern: { r0_update_0[d0, d1, d2] -> u[d0, d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Read schedule : { r0_update_0[d0, d1, d2] -> [1 + d2, d1, d0, 4] : 0 <= d0 <= 7 and 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { u_update_0[d0, d1, d2] -> [d2, d1, d0, 3] : 0 <= d0 <= 8 and 0 <= d1 <= 7 and -1 <= d2 <= 8 }
  // DD fold: { r0_update_0[d0, d1, d2] -> 72 : 0 < d0 <= 7 and 0 < d1 <= 6 and 0 <= d2 <= 7; r0_update_0[d0, d1, d2] -> 72 : d1 = 7 and 0 < d0 <= 7 and 0 <= d2 <= 7; r0_update_0[d0, d1, d2] -> 72 : d0 = 0 and 0 < d1 <= 6 and 0 <= d2 <= 7; r0_update_0[d0, d1, d2] -> 72 : d0 = 0 and d1 = 7 and 0 <= d2 <= 7; r0_update_0[d0, d1, d2] -> 72 : d1 = 0 and 0 < d0 <= 7 and 0 <= d2 <= 7; r0_update_0[d0, d1, d2] -> 72 : d0 = 0 and d1 = 0 and 0 <= d2 <= 7 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_6.peek_72();
  return value_u_u_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 5
// diff_i_update_0_read
//	diff_i_rd0
//	diff_i_rd1
inline hw_uint<32> u_diff_i_update_0_read_bundle_read(u_cache& u, int d0, int d1, int d2) {
  // # of ports in bundle: 2
    // diff_i_rd0
    // diff_i_rd1

	hw_uint<32> result;
	hw_uint<16> diff_i_rd0_res = diff_i_rd0_select(u, d0, d1, d2);
	set_at<0, 32>(result, diff_i_rd0_res);
	hw_uint<16> diff_i_rd1_res = diff_i_rd1_select(u, d0, d1, d2);
	set_at<16, 32>(result, diff_i_rd1_res);
	return result;
}

// diff_o_update_0_read
//	diff_o_rd0
//	diff_o_rd1
inline hw_uint<32> u_diff_o_update_0_read_bundle_read(u_cache& u, int d0, int d1, int d2) {
  // # of ports in bundle: 2
    // diff_o_rd0
    // diff_o_rd1

	hw_uint<32> result;
	hw_uint<16> diff_o_rd0_res = diff_o_rd0_select(u, d0, d1, d2);
	set_at<0, 32>(result, diff_o_rd0_res);
	hw_uint<16> diff_o_rd1_res = diff_o_rd1_select(u, d0, d1, d2);
	set_at<16, 32>(result, diff_o_rd1_res);
	return result;
}

// dn_reconv_update_0_read
//	dn_reconv_rd0
inline hw_uint<16> u_dn_reconv_update_0_read_bundle_read(u_cache& u, int d0, int d1, int d2) {
  // # of ports in bundle: 1
    // dn_reconv_rd0

	hw_uint<16> result;
	hw_uint<16> dn_reconv_rd0_res = dn_reconv_rd0_select(u, d0, d1, d2);
	set_at<0, 16>(result, dn_reconv_rd0_res);
	return result;
}

// r0_update_0_read
//	r0_rd0
inline hw_uint<16> u_r0_update_0_read_bundle_read(u_cache& u, int d0, int d1, int d2) {
  // # of ports in bundle: 1
    // r0_rd0

	hw_uint<16> result;
	hw_uint<16> r0_rd0_res = r0_rd0_select(u, d0, d1, d2);
	set_at<0, 16>(result, r0_rd0_res);
	return result;
}

// u_update_0_write
//	u_u_update_0_write0
inline void u_u_update_0_write_bundle_write(hw_uint<16>& u_update_0_write, u_cache& u, int d0, int d1, int d2) {
	hw_uint<16> u_u_update_0_write0_res = u_update_0_write.extract<0, 15>();
	u_u_update_0_write0_write(u_u_update_0_write0_res, u, d0, d1, d2);
}



// Operation logic
inline void u_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */u_oc, u_cache& u, int d0, int d1, int d2) {
	// Consume: u_oc
	auto u_oc_0_c__0_value = u_oc.read();
	auto compute_result = u_generated_compute_unrolled_1(u_oc_0_c__0_value);
	// Produce: u
	u_u_update_0_write_bundle_write(compute_result, u, d0, d1, d2);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void f_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */f_oc, f_cache& f, int d0, int d1, int d2) {
	// Consume: f_oc
	auto f_oc_0_c__0_value = f_oc.read();
	auto compute_result = f_generated_compute_unrolled_1(f_oc_0_c__0_value);
	// Produce: f
	f_f_update_0_write_bundle_write(compute_result, f, d0, d1, d2);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void r0_update_0(f_cache& f, u_cache& u, r0_cache& r0, int d0, int d1, int d2) {
	// Consume: f
	auto f_0_c__0_value = f_r0_update_0_read_bundle_read(f/* source_delay */, d0, d1, d2);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: u
	auto u_0_c__0_value = u_r0_update_0_read_bundle_read(u/* source_delay */, d0, d1, d2);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = r0_generated_compute_unrolled_1(f_0_c__0_value, u_0_c__0_value);
	// Produce: r0
	r0_r0_update_0_write_bundle_write(compute_result, r0, d0, d1, d2);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff_i_update_0(u_cache& u, diff_i_cache& diff_i, int d0, int d1, int d2) {
	// Consume: u
	auto u_0_c__0_value = u_diff_i_update_0_read_bundle_read(u/* source_delay */, d0, d1, d2);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_i_generated_compute_unrolled_1(u_0_c__0_value);
	// Produce: diff_i
	diff_i_diff_i_update_0_write_bundle_write(compute_result, diff_i, d0, d1, d2);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void r1_update_0(r0_cache& r0, r1_cache& r1, int d0, int d1, int d2) {
	// Consume: r0
	auto r0_0_c__0_value = r0_r1_update_0_read_bundle_read(r0/* source_delay */, d0, d1, d2);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = r1_generated_compute_unrolled_1(r0_0_c__0_value);
	// Produce: r1
	r1_r1_update_0_write_bundle_write(compute_result, r1, d0, d1, d2);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dn_reconv_update_0(g_cache& g, r1_cache& r1, u_cache& u, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */dn_reconv, int d0, int d1, int d2) {
	// Consume: g
	auto g_0_c__0_value = g_dn_reconv_update_0_read_bundle_read(g/* source_delay */, d0, d1, d2);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: r1
	auto r1_0_c__0_value = r1_dn_reconv_update_0_read_bundle_read(r1/* source_delay */, d0, d1, d2);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: u
	auto u_0_c__0_value = u_dn_reconv_update_0_read_bundle_read(u/* source_delay */, d0, d1, d2);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = dn_reconv_generated_compute_unrolled_1(g_0_c__0_value, r1_0_c__0_value, u_0_c__0_value);
	// Produce: dn_reconv
	dn_reconv.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff_o_update_0(u_cache& u, diff_o_cache& diff_o, int d0, int d1, int d2) {
	// Consume: u
	auto u_0_c__0_value = u_diff_o_update_0_read_bundle_read(u/* source_delay */, d0, d1, d2);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_o_generated_compute_unrolled_1(u_0_c__0_value);
	// Produce: diff_o
	diff_o_diff_o_update_0_write_bundle_write(compute_result, diff_o, d0, d1, d2);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void g_update_0(diff_i_cache& diff_i, diff_o_cache& diff_o, g_cache& g, int d0, int d1, int d2) {
	// Consume: diff_i
	auto diff_i_0_c__0_value = diff_i_g_update_0_read_bundle_read(diff_i/* source_delay */, d0, d1, d2);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: diff_o
	auto diff_o_0_c__0_value = diff_o_g_update_0_read_bundle_read(diff_o/* source_delay */, d0, d1, d2);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = g_generated_compute_unrolled_1(diff_i_0_c__0_value, diff_o_0_c__0_value);
	// Produce: g
	g_g_update_0_write_bundle_write(compute_result, g, d0, d1, d2);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void dn_reconv_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */f_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */u_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */dn_reconv, int num_epochs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("dn_reconv_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  diff_i_cache diff_i;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  diff_o_cache diff_o;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  f_cache f;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  g_cache g;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  r0_cache r0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  r1_cache r1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  u_cache u;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

  for (int epoch = 0; epoch < num_epochs; epoch++) {
	  // Schedules...
	    // diff_i_update_0 -> [1*d2*1*1 + 1*1,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*6]
	    // diff_o_update_0 -> [1*d2*1*1 + 1*1,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*5]
	    // dn_reconv_update_0 -> [1*d2*1*1 + 1*1,1*d1*1*1 + 1*0,1*d0*1*1 + 1*1,1*9]
	    // f_oc_update_0 -> [1*d2*1*1 + 1*1,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // f_update_0 -> [1*d2*1*1 + 1*1,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // g_update_0 -> [1*d2*1*1 + 1*1,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*8]
	    // r0_update_0 -> [1*d2*1*1 + 1*1,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*4]
	    // r1_update_0 -> [1*d2*1*1 + 1*1,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*7]
	    // u_oc_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*2]
	    // u_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*3]
	for (int c0 = -1; c0 <= 8; c0++) {
	  for (int c1 = 0; c1 <= 7; c1++) {
	    for (int c2 = 0; c2 <= 8; c2++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	      if ((0 <= c2 && c2 <= 7) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 7) && ((c1 - 0) % 1 == 0) && (1 <= c0 && c0 <= 8) && ((c0 - 1) % 1 == 0)) {
	f_update_0(f_oc, f, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 1) / 1);
	      }
	
	      if ((0 <= c2 && c2 <= 8) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 7) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 8) && ((c0 - 0) % 1 == 0)) {
	u_update_0(u_oc, u, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((0 <= c2 && c2 <= 7) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 7) && ((c1 - 0) % 1 == 0) && (1 <= c0 && c0 <= 8) && ((c0 - 1) % 1 == 0)) {
	r0_update_0(f, u, r0, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 1) / 1);
	      }
	
	      if ((0 <= c2 && c2 <= 8) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 7) && ((c1 - 0) % 1 == 0) && (1 <= c0 && c0 <= 8) && ((c0 - 1) % 1 == 0)) {
	diff_o_update_0(u, diff_o, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 1) / 1);
	      }
	
	      if ((0 <= c2 && c2 <= 8) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 7) && ((c1 - 0) % 1 == 0) && (1 <= c0 && c0 <= 8) && ((c0 - 1) % 1 == 0)) {
	diff_i_update_0(u, diff_i, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 1) / 1);
	      }
	
	      if ((0 <= c2 && c2 <= 7) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 7) && ((c1 - 0) % 1 == 0) && (1 <= c0 && c0 <= 8) && ((c0 - 1) % 1 == 0)) {
	r1_update_0(r0, r1, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 1) / 1);
	      }
	
	      if ((0 <= c2 && c2 <= 8) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 7) && ((c1 - 0) % 1 == 0) && (1 <= c0 && c0 <= 8) && ((c0 - 1) % 1 == 0)) {
	g_update_0(diff_i, diff_o, g, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 1) / 1);
	      }
	
	      if ((1 <= c2 && c2 <= 8) && ((c2 - 1) % 1 == 0) && (0 <= c1 && c1 <= 7) && ((c1 - 0) % 1 == 0) && (1 <= c0 && c0 <= 8) && ((c0 - 1) % 1 == 0)) {
	dn_reconv_update_0(g, r1, u, dn_reconv, (c2 - 1) / 1, (c1 - 0) / 1, (c0 - 1) / 1);
	      }
	
	    }
	  }
	}
	
  }

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void dn_reconv_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */f_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */u_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */dn_reconv) {

  dn_reconv_opt(f_oc, u_oc, dn_reconv, 1);
}
#ifdef __VIVADO_SYNTH__
#include "dn_reconv_opt.h"

const int dn_reconv_update_0_write_num_transfers = 512;
const int f_update_0_read_num_transfers = 512;
const int u_update_0_read_num_transfers = 720;


extern "C" {

static void read_f_update_0_read(hw_uint<16>* input, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = f_update_0_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void read_u_update_0_read(hw_uint<16>* input, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = u_update_0_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_dn_reconv_update_0_write(hw_uint<16>* output, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = dn_reconv_update_0_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void dn_reconv_opt_accel(hw_uint<16>* f_update_0_read, hw_uint<16>* u_update_0_read, hw_uint<16>* dn_reconv_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = f_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = u_update_0_read offset = slave depth = 65536 bundle = gmem1
#pragma HLS INTERFACE m_axi port = dn_reconv_update_0_write offset = slave depth = 65536 bundle = gmem2

#pragma HLS INTERFACE s_axilite port = f_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = u_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = dn_reconv_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<16> > f_update_0_read_channel;
  static HWStream<hw_uint<16> > u_update_0_read_channel;
  static HWStream<hw_uint<16> > dn_reconv_update_0_write_channel;

  read_f_update_0_read(f_update_0_read, f_update_0_read_channel, size);
  read_u_update_0_read(u_update_0_read, u_update_0_read_channel, size);

  dn_reconv_opt(f_update_0_read_channel, u_update_0_read_channel, dn_reconv_update_0_write_channel, size);

  write_dn_reconv_update_0_write(dn_reconv_update_0_write, dn_reconv_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

