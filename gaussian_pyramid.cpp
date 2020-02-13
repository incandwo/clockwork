#include "conv_3x3.h"

#include "hw_classes.h"

struct I_store_I_from_in_16_cache {
	// Capacity: 67
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 32) capacity = 29
	fifo<hw_uint<32> , 29> f5;
	// Parition [32, 33) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [33, 34) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [34, 35) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [35, 64) capacity = 29
	fifo<hw_uint<32> , 29> f11;
	// Parition [64, 65) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [65, 66) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [66, 66] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_31() {
		return f5.back();
	}

	inline hw_uint<32>  peek_32() {
		return f6.back();
	}

	inline hw_uint<32>  peek_33() {
		return f8.back();
	}

	inline hw_uint<32>  peek_34() {
		return f10.back();
	}

	inline hw_uint<32>  peek_63() {
		return f11.back();
	}

	inline hw_uint<32>  peek_64() {
		return f12.back();
	}

	inline hw_uint<32>  peek_65() {
		return f14.back();
	}

	inline hw_uint<32>  peek_66() {
		return f16.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		if (offset == 31) {
			return f5.back();
		}
		if (offset == 32) {
			return f6.back();
		}
		if (offset == 33) {
			return f8.back();
		}
		if (offset == 34) {
			return f10.back();
		}
		if (offset == 63) {
			return f11.back();
		}
		if (offset == 64) {
			return f12.back();
		}
		if (offset == 65) {
			return f14.back();
		}
		if (offset == 66) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
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



inline void I_store_I_from_in_16_write(hw_uint<32> & I_store_I_from_in_16, I_store_I_from_in_16_cache& I_store_I_from_in_16_delay) {
	I_store_I_from_in_16_delay.push(I_store_I_from_in_16);
}

inline hw_uint<32>  I_I_blr_conv_3_30_19_select(I_store_I_from_in_16_cache& I_store_I_from_in_16_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 66 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_16 = I_store_I_from_in_16_delay.peek_66();
	return value_I_store_I_from_in_16;
}

inline hw_uint<32>  I_I_blr_conv_3_30_20_select(I_store_I_from_in_16_cache& I_store_I_from_in_16_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 65 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_16 = I_store_I_from_in_16_delay.peek_65();
	return value_I_store_I_from_in_16;
}

inline hw_uint<32>  I_I_blr_conv_3_30_21_select(I_store_I_from_in_16_cache& I_store_I_from_in_16_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 28 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 64 }
// 	is always true on iteration domain: 0
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c = 29] : 0 <= I_blr_r <= 29 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> (35 + I_blr_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 1
	int value_I_store_I_from_in_16 = I_store_I_from_in_16_delay.peek_64();
	return value_I_store_I_from_in_16;
}

inline hw_uint<32>  I_I_blr_conv_3_30_22_select(I_store_I_from_in_16_cache& I_store_I_from_in_16_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 34 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_16 = I_store_I_from_in_16_delay.peek_34();
	return value_I_store_I_from_in_16;
}

inline hw_uint<32>  I_I_blr_conv_3_30_23_select(I_store_I_from_in_16_cache& I_store_I_from_in_16_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 33 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_16 = I_store_I_from_in_16_delay.peek_33();
	return value_I_store_I_from_in_16;
}

inline hw_uint<32>  I_I_blr_conv_3_30_24_select(I_store_I_from_in_16_cache& I_store_I_from_in_16_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 28 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 32 }
// 	is always true on iteration domain: 0
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c = 29] : 0 <= I_blr_r <= 29 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> (3 + I_blr_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 1
	int value_I_store_I_from_in_16 = I_store_I_from_in_16_delay.peek_32();
	return value_I_store_I_from_in_16;
}

inline hw_uint<32>  I_I_blr_conv_3_30_25_select(I_store_I_from_in_16_cache& I_store_I_from_in_16_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 2 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_16 = I_store_I_from_in_16_delay.peek_2();
	return value_I_store_I_from_in_16;
}

inline hw_uint<32>  I_I_blr_conv_3_30_26_select(I_store_I_from_in_16_cache& I_store_I_from_in_16_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 1 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_16 = I_store_I_from_in_16_delay.peek_1();
	return value_I_store_I_from_in_16;
}

inline hw_uint<32>  I_I_blr_conv_3_30_27_select(I_store_I_from_in_16_cache& I_store_I_from_in_16_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// Always 0
//	is optimizable constant: 0
	hw_uint<32>  value_I_store_I_from_in_16 = I_store_I_from_in_16_delay.peek_0();
	return value_I_store_I_from_in_16;
}

// Bundles...
// I_blr_conv_3_30_read
//	I_I_blr_conv_3_30_19
//	I_I_blr_conv_3_30_20
//	I_I_blr_conv_3_30_21
//	I_I_blr_conv_3_30_22
//	I_I_blr_conv_3_30_23
//	I_I_blr_conv_3_30_24
//	I_I_blr_conv_3_30_25
//	I_I_blr_conv_3_30_26
//	I_I_blr_conv_3_30_27
inline hw_uint<288> I_I_blr_conv_3_30_read_bundle_read(I_store_I_from_in_16_cache& I_store_I_from_in_16_delay, int root, int I_blr_r, int I_blr_c) {
	hw_uint<288> result;
	hw_uint<32>  I_I_blr_conv_3_30_19_res = I_I_blr_conv_3_30_19_select(I_store_I_from_in_16_delay, root, I_blr_r, I_blr_c);
	set_at<0, 288>(result, I_I_blr_conv_3_30_19_res);
	hw_uint<32>  I_I_blr_conv_3_30_20_res = I_I_blr_conv_3_30_20_select(I_store_I_from_in_16_delay, root, I_blr_r, I_blr_c);
	set_at<32, 288>(result, I_I_blr_conv_3_30_20_res);
	hw_uint<32>  I_I_blr_conv_3_30_21_res = I_I_blr_conv_3_30_21_select(I_store_I_from_in_16_delay, root, I_blr_r, I_blr_c);
	set_at<64, 288>(result, I_I_blr_conv_3_30_21_res);
	hw_uint<32>  I_I_blr_conv_3_30_22_res = I_I_blr_conv_3_30_22_select(I_store_I_from_in_16_delay, root, I_blr_r, I_blr_c);
	set_at<96, 288>(result, I_I_blr_conv_3_30_22_res);
	hw_uint<32>  I_I_blr_conv_3_30_23_res = I_I_blr_conv_3_30_23_select(I_store_I_from_in_16_delay, root, I_blr_r, I_blr_c);
	set_at<128, 288>(result, I_I_blr_conv_3_30_23_res);
	hw_uint<32>  I_I_blr_conv_3_30_24_res = I_I_blr_conv_3_30_24_select(I_store_I_from_in_16_delay, root, I_blr_r, I_blr_c);
	set_at<160, 288>(result, I_I_blr_conv_3_30_24_res);
	hw_uint<32>  I_I_blr_conv_3_30_25_res = I_I_blr_conv_3_30_25_select(I_store_I_from_in_16_delay, root, I_blr_r, I_blr_c);
	set_at<192, 288>(result, I_I_blr_conv_3_30_25_res);
	hw_uint<32>  I_I_blr_conv_3_30_26_res = I_I_blr_conv_3_30_26_select(I_store_I_from_in_16_delay, root, I_blr_r, I_blr_c);
	set_at<224, 288>(result, I_I_blr_conv_3_30_26_res);
	hw_uint<32>  I_I_blr_conv_3_30_27_res = I_I_blr_conv_3_30_27_select(I_store_I_from_in_16_delay, root, I_blr_r, I_blr_c);
	set_at<256, 288>(result, I_I_blr_conv_3_30_27_res);
	return result;
}

// store_I_from_in_write
//	I_store_I_from_in_16
inline void I_store_I_from_in_write_bundle_write(hw_uint<32> & /* width = 32*/store_I_from_in_write, I_store_I_from_in_16_cache& I_store_I_from_in_16_delay) {
	I_store_I_from_in_16_write(store_I_from_in_write, I_store_I_from_in_16_delay);
}



#include "hw_classes.h"

struct I_blr_I_blr_conv_3_30_18_cache {
	// Capacity: 435
	fifo<hw_uint<32> , 435> f;
	inline hw_uint<32>  peek(const int offset) {
		return f.peek(434 - offset);
	}

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
		return f.peek(53);
	}

	inline hw_uint<32>  peek_54() {
		return f.peek(54);
	}

	inline hw_uint<32>  peek_55() {
		return f.peek(55);
	}

	inline hw_uint<32>  peek_56() {
		return f.peek(56);
	}

	inline hw_uint<32>  peek_57() {
		return f.peek(57);
	}

	inline hw_uint<32>  peek_58() {
		return f.peek(58);
	}

	inline hw_uint<32>  peek_59() {
		return f.peek(59);
	}

	inline hw_uint<32>  peek_60() {
		return f.peek(60);
	}

	inline hw_uint<32>  peek_61() {
		return f.peek(61);
	}

	inline hw_uint<32>  peek_62() {
		return f.peek(62);
	}

	inline hw_uint<32>  peek_63() {
		return f.peek(63);
	}

	inline hw_uint<32>  peek_64() {
		return f.peek(64);
	}

	inline hw_uint<32>  peek_65() {
		return f.peek(65);
	}

	inline hw_uint<32>  peek_66() {
		return f.peek(66);
	}

	inline hw_uint<32>  peek_67() {
		return f.peek(67);
	}

	inline hw_uint<32>  peek_68() {
		return f.peek(68);
	}

	inline hw_uint<32>  peek_69() {
		return f.peek(69);
	}

	inline hw_uint<32>  peek_70() {
		return f.peek(70);
	}

	inline hw_uint<32>  peek_71() {
		return f.peek(71);
	}

	inline hw_uint<32>  peek_72() {
		return f.peek(72);
	}

	inline hw_uint<32>  peek_73() {
		return f.peek(73);
	}

	inline hw_uint<32>  peek_74() {
		return f.peek(74);
	}

	inline hw_uint<32>  peek_75() {
		return f.peek(75);
	}

	inline hw_uint<32>  peek_76() {
		return f.peek(76);
	}

	inline hw_uint<32>  peek_77() {
		return f.peek(77);
	}

	inline hw_uint<32>  peek_78() {
		return f.peek(78);
	}

	inline hw_uint<32>  peek_79() {
		return f.peek(79);
	}

	inline hw_uint<32>  peek_80() {
		return f.peek(80);
	}

	inline hw_uint<32>  peek_81() {
		return f.peek(81);
	}

	inline hw_uint<32>  peek_82() {
		return f.peek(82);
	}

	inline hw_uint<32>  peek_83() {
		return f.peek(83);
	}

	inline hw_uint<32>  peek_84() {
		return f.peek(84);
	}

	inline hw_uint<32>  peek_85() {
		return f.peek(85);
	}

	inline hw_uint<32>  peek_86() {
		return f.peek(86);
	}

	inline hw_uint<32>  peek_87() {
		return f.peek(87);
	}

	inline hw_uint<32>  peek_88() {
		return f.peek(88);
	}

	inline hw_uint<32>  peek_89() {
		return f.peek(89);
	}

	inline hw_uint<32>  peek_90() {
		return f.peek(90);
	}

	inline hw_uint<32>  peek_91() {
		return f.peek(91);
	}

	inline hw_uint<32>  peek_92() {
		return f.peek(92);
	}

	inline hw_uint<32>  peek_93() {
		return f.peek(93);
	}

	inline hw_uint<32>  peek_94() {
		return f.peek(94);
	}

	inline hw_uint<32>  peek_95() {
		return f.peek(95);
	}

	inline hw_uint<32>  peek_96() {
		return f.peek(96);
	}

	inline hw_uint<32>  peek_97() {
		return f.peek(97);
	}

	inline hw_uint<32>  peek_98() {
		return f.peek(98);
	}

	inline hw_uint<32>  peek_99() {
		return f.peek(99);
	}

	inline hw_uint<32>  peek_100() {
		return f.peek(100);
	}

	inline hw_uint<32>  peek_101() {
		return f.peek(101);
	}

	inline hw_uint<32>  peek_102() {
		return f.peek(102);
	}

	inline hw_uint<32>  peek_103() {
		return f.peek(103);
	}

	inline hw_uint<32>  peek_104() {
		return f.peek(104);
	}

	inline hw_uint<32>  peek_105() {
		return f.peek(105);
	}

	inline hw_uint<32>  peek_106() {
		return f.peek(106);
	}

	inline hw_uint<32>  peek_107() {
		return f.peek(107);
	}

	inline hw_uint<32>  peek_108() {
		return f.peek(108);
	}

	inline hw_uint<32>  peek_109() {
		return f.peek(109);
	}

	inline hw_uint<32>  peek_110() {
		return f.peek(110);
	}

	inline hw_uint<32>  peek_111() {
		return f.peek(111);
	}

	inline hw_uint<32>  peek_112() {
		return f.peek(112);
	}

	inline hw_uint<32>  peek_113() {
		return f.peek(113);
	}

	inline hw_uint<32>  peek_114() {
		return f.peek(114);
	}

	inline hw_uint<32>  peek_115() {
		return f.peek(115);
	}

	inline hw_uint<32>  peek_116() {
		return f.peek(116);
	}

	inline hw_uint<32>  peek_117() {
		return f.peek(117);
	}

	inline hw_uint<32>  peek_118() {
		return f.peek(118);
	}

	inline hw_uint<32>  peek_119() {
		return f.peek(119);
	}

	inline hw_uint<32>  peek_120() {
		return f.peek(120);
	}

	inline hw_uint<32>  peek_121() {
		return f.peek(121);
	}

	inline hw_uint<32>  peek_122() {
		return f.peek(122);
	}

	inline hw_uint<32>  peek_123() {
		return f.peek(123);
	}

	inline hw_uint<32>  peek_124() {
		return f.peek(124);
	}

	inline hw_uint<32>  peek_125() {
		return f.peek(125);
	}

	inline hw_uint<32>  peek_126() {
		return f.peek(126);
	}

	inline hw_uint<32>  peek_127() {
		return f.peek(127);
	}

	inline hw_uint<32>  peek_128() {
		return f.peek(128);
	}

	inline hw_uint<32>  peek_129() {
		return f.peek(129);
	}

	inline hw_uint<32>  peek_130() {
		return f.peek(130);
	}

	inline hw_uint<32>  peek_131() {
		return f.peek(131);
	}

	inline hw_uint<32>  peek_132() {
		return f.peek(132);
	}

	inline hw_uint<32>  peek_133() {
		return f.peek(133);
	}

	inline hw_uint<32>  peek_134() {
		return f.peek(134);
	}

	inline hw_uint<32>  peek_135() {
		return f.peek(135);
	}

	inline hw_uint<32>  peek_136() {
		return f.peek(136);
	}

	inline hw_uint<32>  peek_137() {
		return f.peek(137);
	}

	inline hw_uint<32>  peek_138() {
		return f.peek(138);
	}

	inline hw_uint<32>  peek_139() {
		return f.peek(139);
	}

	inline hw_uint<32>  peek_140() {
		return f.peek(140);
	}

	inline hw_uint<32>  peek_141() {
		return f.peek(141);
	}

	inline hw_uint<32>  peek_142() {
		return f.peek(142);
	}

	inline hw_uint<32>  peek_143() {
		return f.peek(143);
	}

	inline hw_uint<32>  peek_144() {
		return f.peek(144);
	}

	inline hw_uint<32>  peek_145() {
		return f.peek(145);
	}

	inline hw_uint<32>  peek_146() {
		return f.peek(146);
	}

	inline hw_uint<32>  peek_147() {
		return f.peek(147);
	}

	inline hw_uint<32>  peek_148() {
		return f.peek(148);
	}

	inline hw_uint<32>  peek_149() {
		return f.peek(149);
	}

	inline hw_uint<32>  peek_150() {
		return f.peek(150);
	}

	inline hw_uint<32>  peek_151() {
		return f.peek(151);
	}

	inline hw_uint<32>  peek_152() {
		return f.peek(152);
	}

	inline hw_uint<32>  peek_153() {
		return f.peek(153);
	}

	inline hw_uint<32>  peek_154() {
		return f.peek(154);
	}

	inline hw_uint<32>  peek_155() {
		return f.peek(155);
	}

	inline hw_uint<32>  peek_156() {
		return f.peek(156);
	}

	inline hw_uint<32>  peek_157() {
		return f.peek(157);
	}

	inline hw_uint<32>  peek_158() {
		return f.peek(158);
	}

	inline hw_uint<32>  peek_159() {
		return f.peek(159);
	}

	inline hw_uint<32>  peek_160() {
		return f.peek(160);
	}

	inline hw_uint<32>  peek_161() {
		return f.peek(161);
	}

	inline hw_uint<32>  peek_162() {
		return f.peek(162);
	}

	inline hw_uint<32>  peek_163() {
		return f.peek(163);
	}

	inline hw_uint<32>  peek_164() {
		return f.peek(164);
	}

	inline hw_uint<32>  peek_165() {
		return f.peek(165);
	}

	inline hw_uint<32>  peek_166() {
		return f.peek(166);
	}

	inline hw_uint<32>  peek_167() {
		return f.peek(167);
	}

	inline hw_uint<32>  peek_168() {
		return f.peek(168);
	}

	inline hw_uint<32>  peek_169() {
		return f.peek(169);
	}

	inline hw_uint<32>  peek_170() {
		return f.peek(170);
	}

	inline hw_uint<32>  peek_171() {
		return f.peek(171);
	}

	inline hw_uint<32>  peek_172() {
		return f.peek(172);
	}

	inline hw_uint<32>  peek_173() {
		return f.peek(173);
	}

	inline hw_uint<32>  peek_174() {
		return f.peek(174);
	}

	inline hw_uint<32>  peek_175() {
		return f.peek(175);
	}

	inline hw_uint<32>  peek_176() {
		return f.peek(176);
	}

	inline hw_uint<32>  peek_177() {
		return f.peek(177);
	}

	inline hw_uint<32>  peek_178() {
		return f.peek(178);
	}

	inline hw_uint<32>  peek_179() {
		return f.peek(179);
	}

	inline hw_uint<32>  peek_180() {
		return f.peek(180);
	}

	inline hw_uint<32>  peek_181() {
		return f.peek(181);
	}

	inline hw_uint<32>  peek_182() {
		return f.peek(182);
	}

	inline hw_uint<32>  peek_183() {
		return f.peek(183);
	}

	inline hw_uint<32>  peek_184() {
		return f.peek(184);
	}

	inline hw_uint<32>  peek_185() {
		return f.peek(185);
	}

	inline hw_uint<32>  peek_186() {
		return f.peek(186);
	}

	inline hw_uint<32>  peek_187() {
		return f.peek(187);
	}

	inline hw_uint<32>  peek_188() {
		return f.peek(188);
	}

	inline hw_uint<32>  peek_189() {
		return f.peek(189);
	}

	inline hw_uint<32>  peek_190() {
		return f.peek(190);
	}

	inline hw_uint<32>  peek_191() {
		return f.peek(191);
	}

	inline hw_uint<32>  peek_192() {
		return f.peek(192);
	}

	inline hw_uint<32>  peek_193() {
		return f.peek(193);
	}

	inline hw_uint<32>  peek_194() {
		return f.peek(194);
	}

	inline hw_uint<32>  peek_195() {
		return f.peek(195);
	}

	inline hw_uint<32>  peek_196() {
		return f.peek(196);
	}

	inline hw_uint<32>  peek_197() {
		return f.peek(197);
	}

	inline hw_uint<32>  peek_198() {
		return f.peek(198);
	}

	inline hw_uint<32>  peek_199() {
		return f.peek(199);
	}

	inline hw_uint<32>  peek_200() {
		return f.peek(200);
	}

	inline hw_uint<32>  peek_201() {
		return f.peek(201);
	}

	inline hw_uint<32>  peek_202() {
		return f.peek(202);
	}

	inline hw_uint<32>  peek_203() {
		return f.peek(203);
	}

	inline hw_uint<32>  peek_204() {
		return f.peek(204);
	}

	inline hw_uint<32>  peek_205() {
		return f.peek(205);
	}

	inline hw_uint<32>  peek_206() {
		return f.peek(206);
	}

	inline hw_uint<32>  peek_207() {
		return f.peek(207);
	}

	inline hw_uint<32>  peek_208() {
		return f.peek(208);
	}

	inline hw_uint<32>  peek_209() {
		return f.peek(209);
	}

	inline hw_uint<32>  peek_210() {
		return f.peek(210);
	}

	inline hw_uint<32>  peek_211() {
		return f.peek(211);
	}

	inline hw_uint<32>  peek_212() {
		return f.peek(212);
	}

	inline hw_uint<32>  peek_213() {
		return f.peek(213);
	}

	inline hw_uint<32>  peek_214() {
		return f.peek(214);
	}

	inline hw_uint<32>  peek_215() {
		return f.peek(215);
	}

	inline hw_uint<32>  peek_216() {
		return f.peek(216);
	}

	inline hw_uint<32>  peek_217() {
		return f.peek(217);
	}

	inline hw_uint<32>  peek_218() {
		return f.peek(218);
	}

	inline hw_uint<32>  peek_219() {
		return f.peek(219);
	}

	inline hw_uint<32>  peek_220() {
		return f.peek(220);
	}

	inline hw_uint<32>  peek_221() {
		return f.peek(221);
	}

	inline hw_uint<32>  peek_222() {
		return f.peek(222);
	}

	inline hw_uint<32>  peek_223() {
		return f.peek(223);
	}

	inline hw_uint<32>  peek_224() {
		return f.peek(224);
	}

	inline hw_uint<32>  peek_225() {
		return f.peek(225);
	}

	inline hw_uint<32>  peek_226() {
		return f.peek(226);
	}

	inline hw_uint<32>  peek_227() {
		return f.peek(227);
	}

	inline hw_uint<32>  peek_228() {
		return f.peek(228);
	}

	inline hw_uint<32>  peek_229() {
		return f.peek(229);
	}

	inline hw_uint<32>  peek_230() {
		return f.peek(230);
	}

	inline hw_uint<32>  peek_231() {
		return f.peek(231);
	}

	inline hw_uint<32>  peek_232() {
		return f.peek(232);
	}

	inline hw_uint<32>  peek_233() {
		return f.peek(233);
	}

	inline hw_uint<32>  peek_234() {
		return f.peek(234);
	}

	inline hw_uint<32>  peek_235() {
		return f.peek(235);
	}

	inline hw_uint<32>  peek_236() {
		return f.peek(236);
	}

	inline hw_uint<32>  peek_237() {
		return f.peek(237);
	}

	inline hw_uint<32>  peek_238() {
		return f.peek(238);
	}

	inline hw_uint<32>  peek_239() {
		return f.peek(239);
	}

	inline hw_uint<32>  peek_240() {
		return f.peek(240);
	}

	inline hw_uint<32>  peek_241() {
		return f.peek(241);
	}

	inline hw_uint<32>  peek_242() {
		return f.peek(242);
	}

	inline hw_uint<32>  peek_243() {
		return f.peek(243);
	}

	inline hw_uint<32>  peek_244() {
		return f.peek(244);
	}

	inline hw_uint<32>  peek_245() {
		return f.peek(245);
	}

	inline hw_uint<32>  peek_246() {
		return f.peek(246);
	}

	inline hw_uint<32>  peek_247() {
		return f.peek(247);
	}

	inline hw_uint<32>  peek_248() {
		return f.peek(248);
	}

	inline hw_uint<32>  peek_249() {
		return f.peek(249);
	}

	inline hw_uint<32>  peek_250() {
		return f.peek(250);
	}

	inline hw_uint<32>  peek_251() {
		return f.peek(251);
	}

	inline hw_uint<32>  peek_252() {
		return f.peek(252);
	}

	inline hw_uint<32>  peek_253() {
		return f.peek(253);
	}

	inline hw_uint<32>  peek_254() {
		return f.peek(254);
	}

	inline hw_uint<32>  peek_255() {
		return f.peek(255);
	}

	inline hw_uint<32>  peek_256() {
		return f.peek(256);
	}

	inline hw_uint<32>  peek_257() {
		return f.peek(257);
	}

	inline hw_uint<32>  peek_258() {
		return f.peek(258);
	}

	inline hw_uint<32>  peek_259() {
		return f.peek(259);
	}

	inline hw_uint<32>  peek_260() {
		return f.peek(260);
	}

	inline hw_uint<32>  peek_261() {
		return f.peek(261);
	}

	inline hw_uint<32>  peek_262() {
		return f.peek(262);
	}

	inline hw_uint<32>  peek_263() {
		return f.peek(263);
	}

	inline hw_uint<32>  peek_264() {
		return f.peek(264);
	}

	inline hw_uint<32>  peek_265() {
		return f.peek(265);
	}

	inline hw_uint<32>  peek_266() {
		return f.peek(266);
	}

	inline hw_uint<32>  peek_267() {
		return f.peek(267);
	}

	inline hw_uint<32>  peek_268() {
		return f.peek(268);
	}

	inline hw_uint<32>  peek_269() {
		return f.peek(269);
	}

	inline hw_uint<32>  peek_270() {
		return f.peek(270);
	}

	inline hw_uint<32>  peek_271() {
		return f.peek(271);
	}

	inline hw_uint<32>  peek_272() {
		return f.peek(272);
	}

	inline hw_uint<32>  peek_273() {
		return f.peek(273);
	}

	inline hw_uint<32>  peek_274() {
		return f.peek(274);
	}

	inline hw_uint<32>  peek_275() {
		return f.peek(275);
	}

	inline hw_uint<32>  peek_276() {
		return f.peek(276);
	}

	inline hw_uint<32>  peek_277() {
		return f.peek(277);
	}

	inline hw_uint<32>  peek_278() {
		return f.peek(278);
	}

	inline hw_uint<32>  peek_279() {
		return f.peek(279);
	}

	inline hw_uint<32>  peek_280() {
		return f.peek(280);
	}

	inline hw_uint<32>  peek_281() {
		return f.peek(281);
	}

	inline hw_uint<32>  peek_282() {
		return f.peek(282);
	}

	inline hw_uint<32>  peek_283() {
		return f.peek(283);
	}

	inline hw_uint<32>  peek_284() {
		return f.peek(284);
	}

	inline hw_uint<32>  peek_285() {
		return f.peek(285);
	}

	inline hw_uint<32>  peek_286() {
		return f.peek(286);
	}

	inline hw_uint<32>  peek_287() {
		return f.peek(287);
	}

	inline hw_uint<32>  peek_288() {
		return f.peek(288);
	}

	inline hw_uint<32>  peek_289() {
		return f.peek(289);
	}

	inline hw_uint<32>  peek_290() {
		return f.peek(290);
	}

	inline hw_uint<32>  peek_291() {
		return f.peek(291);
	}

	inline hw_uint<32>  peek_292() {
		return f.peek(292);
	}

	inline hw_uint<32>  peek_293() {
		return f.peek(293);
	}

	inline hw_uint<32>  peek_294() {
		return f.peek(294);
	}

	inline hw_uint<32>  peek_295() {
		return f.peek(295);
	}

	inline hw_uint<32>  peek_296() {
		return f.peek(296);
	}

	inline hw_uint<32>  peek_297() {
		return f.peek(297);
	}

	inline hw_uint<32>  peek_298() {
		return f.peek(298);
	}

	inline hw_uint<32>  peek_299() {
		return f.peek(299);
	}

	inline hw_uint<32>  peek_300() {
		return f.peek(300);
	}

	inline hw_uint<32>  peek_301() {
		return f.peek(301);
	}

	inline hw_uint<32>  peek_302() {
		return f.peek(302);
	}

	inline hw_uint<32>  peek_303() {
		return f.peek(303);
	}

	inline hw_uint<32>  peek_304() {
		return f.peek(304);
	}

	inline hw_uint<32>  peek_305() {
		return f.peek(305);
	}

	inline hw_uint<32>  peek_306() {
		return f.peek(306);
	}

	inline hw_uint<32>  peek_307() {
		return f.peek(307);
	}

	inline hw_uint<32>  peek_308() {
		return f.peek(308);
	}

	inline hw_uint<32>  peek_309() {
		return f.peek(309);
	}

	inline hw_uint<32>  peek_310() {
		return f.peek(310);
	}

	inline hw_uint<32>  peek_311() {
		return f.peek(311);
	}

	inline hw_uint<32>  peek_312() {
		return f.peek(312);
	}

	inline hw_uint<32>  peek_313() {
		return f.peek(313);
	}

	inline hw_uint<32>  peek_314() {
		return f.peek(314);
	}

	inline hw_uint<32>  peek_315() {
		return f.peek(315);
	}

	inline hw_uint<32>  peek_316() {
		return f.peek(316);
	}

	inline hw_uint<32>  peek_317() {
		return f.peek(317);
	}

	inline hw_uint<32>  peek_318() {
		return f.peek(318);
	}

	inline hw_uint<32>  peek_319() {
		return f.peek(319);
	}

	inline hw_uint<32>  peek_320() {
		return f.peek(320);
	}

	inline hw_uint<32>  peek_321() {
		return f.peek(321);
	}

	inline hw_uint<32>  peek_322() {
		return f.peek(322);
	}

	inline hw_uint<32>  peek_323() {
		return f.peek(323);
	}

	inline hw_uint<32>  peek_324() {
		return f.peek(324);
	}

	inline hw_uint<32>  peek_325() {
		return f.peek(325);
	}

	inline hw_uint<32>  peek_326() {
		return f.peek(326);
	}

	inline hw_uint<32>  peek_327() {
		return f.peek(327);
	}

	inline hw_uint<32>  peek_328() {
		return f.peek(328);
	}

	inline hw_uint<32>  peek_329() {
		return f.peek(329);
	}

	inline hw_uint<32>  peek_330() {
		return f.peek(330);
	}

	inline hw_uint<32>  peek_331() {
		return f.peek(331);
	}

	inline hw_uint<32>  peek_332() {
		return f.peek(332);
	}

	inline hw_uint<32>  peek_333() {
		return f.peek(333);
	}

	inline hw_uint<32>  peek_334() {
		return f.peek(334);
	}

	inline hw_uint<32>  peek_335() {
		return f.peek(335);
	}

	inline hw_uint<32>  peek_336() {
		return f.peek(336);
	}

	inline hw_uint<32>  peek_337() {
		return f.peek(337);
	}

	inline hw_uint<32>  peek_338() {
		return f.peek(338);
	}

	inline hw_uint<32>  peek_339() {
		return f.peek(339);
	}

	inline hw_uint<32>  peek_340() {
		return f.peek(340);
	}

	inline hw_uint<32>  peek_341() {
		return f.peek(341);
	}

	inline hw_uint<32>  peek_342() {
		return f.peek(342);
	}

	inline hw_uint<32>  peek_343() {
		return f.peek(343);
	}

	inline hw_uint<32>  peek_344() {
		return f.peek(344);
	}

	inline hw_uint<32>  peek_345() {
		return f.peek(345);
	}

	inline hw_uint<32>  peek_346() {
		return f.peek(346);
	}

	inline hw_uint<32>  peek_347() {
		return f.peek(347);
	}

	inline hw_uint<32>  peek_348() {
		return f.peek(348);
	}

	inline hw_uint<32>  peek_349() {
		return f.peek(349);
	}

	inline hw_uint<32>  peek_350() {
		return f.peek(350);
	}

	inline hw_uint<32>  peek_351() {
		return f.peek(351);
	}

	inline hw_uint<32>  peek_352() {
		return f.peek(352);
	}

	inline hw_uint<32>  peek_353() {
		return f.peek(353);
	}

	inline hw_uint<32>  peek_354() {
		return f.peek(354);
	}

	inline hw_uint<32>  peek_355() {
		return f.peek(355);
	}

	inline hw_uint<32>  peek_356() {
		return f.peek(356);
	}

	inline hw_uint<32>  peek_357() {
		return f.peek(357);
	}

	inline hw_uint<32>  peek_358() {
		return f.peek(358);
	}

	inline hw_uint<32>  peek_359() {
		return f.peek(359);
	}

	inline hw_uint<32>  peek_360() {
		return f.peek(360);
	}

	inline hw_uint<32>  peek_361() {
		return f.peek(361);
	}

	inline hw_uint<32>  peek_362() {
		return f.peek(362);
	}

	inline hw_uint<32>  peek_363() {
		return f.peek(363);
	}

	inline hw_uint<32>  peek_364() {
		return f.peek(364);
	}

	inline hw_uint<32>  peek_365() {
		return f.peek(365);
	}

	inline hw_uint<32>  peek_366() {
		return f.peek(366);
	}

	inline hw_uint<32>  peek_367() {
		return f.peek(367);
	}

	inline hw_uint<32>  peek_368() {
		return f.peek(368);
	}

	inline hw_uint<32>  peek_369() {
		return f.peek(369);
	}

	inline hw_uint<32>  peek_370() {
		return f.peek(370);
	}

	inline hw_uint<32>  peek_371() {
		return f.peek(371);
	}

	inline hw_uint<32>  peek_372() {
		return f.peek(372);
	}

	inline hw_uint<32>  peek_373() {
		return f.peek(373);
	}

	inline hw_uint<32>  peek_374() {
		return f.peek(374);
	}

	inline hw_uint<32>  peek_375() {
		return f.peek(375);
	}

	inline hw_uint<32>  peek_376() {
		return f.peek(376);
	}

	inline hw_uint<32>  peek_377() {
		return f.peek(377);
	}

	inline hw_uint<32>  peek_378() {
		return f.peek(378);
	}

	inline hw_uint<32>  peek_379() {
		return f.peek(379);
	}

	inline hw_uint<32>  peek_380() {
		return f.peek(380);
	}

	inline hw_uint<32>  peek_381() {
		return f.peek(381);
	}

	inline hw_uint<32>  peek_382() {
		return f.peek(382);
	}

	inline hw_uint<32>  peek_383() {
		return f.peek(383);
	}

	inline hw_uint<32>  peek_384() {
		return f.peek(384);
	}

	inline hw_uint<32>  peek_385() {
		return f.peek(385);
	}

	inline hw_uint<32>  peek_386() {
		return f.peek(386);
	}

	inline hw_uint<32>  peek_387() {
		return f.peek(387);
	}

	inline hw_uint<32>  peek_388() {
		return f.peek(388);
	}

	inline hw_uint<32>  peek_389() {
		return f.peek(389);
	}

	inline hw_uint<32>  peek_390() {
		return f.peek(390);
	}

	inline hw_uint<32>  peek_391() {
		return f.peek(391);
	}

	inline hw_uint<32>  peek_392() {
		return f.peek(392);
	}

	inline hw_uint<32>  peek_393() {
		return f.peek(393);
	}

	inline hw_uint<32>  peek_394() {
		return f.peek(394);
	}

	inline hw_uint<32>  peek_395() {
		return f.peek(395);
	}

	inline hw_uint<32>  peek_396() {
		return f.peek(396);
	}

	inline hw_uint<32>  peek_397() {
		return f.peek(397);
	}

	inline hw_uint<32>  peek_398() {
		return f.peek(398);
	}

	inline hw_uint<32>  peek_399() {
		return f.peek(399);
	}

	inline hw_uint<32>  peek_400() {
		return f.peek(400);
	}

	inline hw_uint<32>  peek_401() {
		return f.peek(401);
	}

	inline hw_uint<32>  peek_402() {
		return f.peek(402);
	}

	inline hw_uint<32>  peek_403() {
		return f.peek(403);
	}

	inline hw_uint<32>  peek_404() {
		return f.peek(404);
	}

	inline hw_uint<32>  peek_405() {
		return f.peek(405);
	}

	inline hw_uint<32>  peek_406() {
		return f.peek(406);
	}

	inline hw_uint<32>  peek_407() {
		return f.peek(407);
	}

	inline hw_uint<32>  peek_408() {
		return f.peek(408);
	}

	inline hw_uint<32>  peek_409() {
		return f.peek(409);
	}

	inline hw_uint<32>  peek_410() {
		return f.peek(410);
	}

	inline hw_uint<32>  peek_411() {
		return f.peek(411);
	}

	inline hw_uint<32>  peek_412() {
		return f.peek(412);
	}

	inline hw_uint<32>  peek_413() {
		return f.peek(413);
	}

	inline hw_uint<32>  peek_414() {
		return f.peek(414);
	}

	inline hw_uint<32>  peek_415() {
		return f.peek(415);
	}

	inline hw_uint<32>  peek_416() {
		return f.peek(416);
	}

	inline hw_uint<32>  peek_417() {
		return f.peek(417);
	}

	inline hw_uint<32>  peek_418() {
		return f.peek(418);
	}

	inline hw_uint<32>  peek_419() {
		return f.peek(419);
	}

	inline hw_uint<32>  peek_420() {
		return f.peek(420);
	}

	inline hw_uint<32>  peek_421() {
		return f.peek(421);
	}

	inline hw_uint<32>  peek_422() {
		return f.peek(422);
	}

	inline hw_uint<32>  peek_423() {
		return f.peek(423);
	}

	inline hw_uint<32>  peek_424() {
		return f.peek(424);
	}

	inline hw_uint<32>  peek_425() {
		return f.peek(425);
	}

	inline hw_uint<32>  peek_426() {
		return f.peek(426);
	}

	inline hw_uint<32>  peek_427() {
		return f.peek(427);
	}

	inline hw_uint<32>  peek_428() {
		return f.peek(428);
	}

	inline hw_uint<32>  peek_429() {
		return f.peek(429);
	}

	inline hw_uint<32>  peek_430() {
		return f.peek(430);
	}

	inline hw_uint<32>  peek_431() {
		return f.peek(431);
	}

	inline hw_uint<32>  peek_432() {
		return f.peek(432);
	}

	inline hw_uint<32>  peek_433() {
		return f.peek(433);
	}

	inline hw_uint<32>  peek_434() {
		return f.peek(434);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		return f.push(value);
	}

};



inline void I_blr_I_blr_conv_3_30_18_write(hw_uint<32> & I_blr_I_blr_conv_3_30_18, I_blr_I_blr_conv_3_30_18_cache& I_blr_I_blr_conv_3_30_18_delay) {
	I_blr_I_blr_conv_3_30_18_delay.push(I_blr_I_blr_conv_3_30_18);
}

inline hw_uint<32>  I_blr_I_blr_ds_id0_1_select(I_blr_I_blr_conv_3_30_18_cache& I_blr_I_blr_conv_3_30_18_delay
, int root, int I_blr_ds_r, int I_blr_ds_c) {
// Pieces...
// { I_blr_ds_id0[root = 0, I_blr_ds_r = 14, I_blr_ds_c] : 0 <= I_blr_ds_c <= 12 } -> { I_blr_ds_id0[root, I_blr_ds_r, I_blr_ds_c] -> (14 - I_blr_ds_c) }
// 	is always true on iteration domain: 0
// { I_blr_ds_id0[root = 0, I_blr_ds_r = 14, I_blr_ds_c = 13] } -> { I_blr_ds_id0[root, I_blr_ds_r, I_blr_ds_c] -> 1 }
// 	is always true on iteration domain: 0
// { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] : 0 <= I_blr_ds_r <= 12 and 0 <= I_blr_ds_c <= 14 } -> { I_blr_ds_id0[root, I_blr_ds_r, I_blr_ds_c] -> ((434 - 30 * I_blr_ds_r) - I_blr_ds_c) }
// 	is always true on iteration domain: 0
// { I_blr_ds_id0[root = 0, I_blr_ds_r = 13, I_blr_ds_c] : 0 <= I_blr_ds_c <= 14 } -> { I_blr_ds_id0[root, I_blr_ds_r, I_blr_ds_c] -> (44 - I_blr_ds_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	int value_I_blr_I_blr_conv_3_30_18 = I_blr_I_blr_conv_3_30_18_delay.peek(((-14 + I_blr_ds_r == 0 && root == 0 && I_blr_ds_c >= 0 && 12 - I_blr_ds_c >= 0) ? ((14 - I_blr_ds_c)) : (-13 + I_blr_ds_c == 0 && -14 + I_blr_ds_r == 0 && root == 0) ? (1) : (root == 0 && I_blr_ds_r >= 0 && 12 - I_blr_ds_r >= 0 && I_blr_ds_c >= 0 && 14 - I_blr_ds_c >= 0) ? (((434 - 30 * I_blr_ds_r) - I_blr_ds_c)) : (-13 + I_blr_ds_r == 0 && root == 0 && I_blr_ds_c >= 0 && 14 - I_blr_ds_c >= 0) ? ((44 - I_blr_ds_c)) : 0));
	return value_I_blr_I_blr_conv_3_30_18;
}

// Bundles...
// I_blr_conv_3_30_write
//	I_blr_I_blr_conv_3_30_18
inline void I_blr_I_blr_conv_3_30_write_bundle_write(hw_uint<32> & /* width = 32*/I_blr_conv_3_30_write, I_blr_I_blr_conv_3_30_18_cache& I_blr_I_blr_conv_3_30_18_delay) {
	I_blr_I_blr_conv_3_30_18_write(I_blr_conv_3_30_write, I_blr_I_blr_conv_3_30_18_delay);
}

// I_blr_ds_id0_read
//	I_blr_I_blr_ds_id0_1
inline hw_uint<32> I_blr_I_blr_ds_id0_read_bundle_read(I_blr_I_blr_conv_3_30_18_cache& I_blr_I_blr_conv_3_30_18_delay, int root, int I_blr_ds_r, int I_blr_ds_c) {
	hw_uint<32> result;
	hw_uint<32>  I_blr_I_blr_ds_id0_1_res = I_blr_I_blr_ds_id0_1_select(I_blr_I_blr_conv_3_30_18_delay, root, I_blr_ds_r, I_blr_ds_c);
	set_at<0, 32>(result, I_blr_I_blr_ds_id0_1_res);
	return result;
}



#include "hw_classes.h"

struct I_blr_ds_I_blr_ds_id0_0_cache {
	// Capacity: 33
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 15) capacity = 12
	fifo<hw_uint<32> , 12> f5;
	// Parition [15, 16) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [16, 17) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [17, 18) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [18, 30) capacity = 12
	fifo<hw_uint<32> , 12> f11;
	// Parition [30, 31) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [31, 32) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [32, 32] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_14() {
		return f5.back();
	}

	inline hw_uint<32>  peek_15() {
		return f6.back();
	}

	inline hw_uint<32>  peek_16() {
		return f8.back();
	}

	inline hw_uint<32>  peek_17() {
		return f10.back();
	}

	inline hw_uint<32>  peek_29() {
		return f11.back();
	}

	inline hw_uint<32>  peek_30() {
		return f12.back();
	}

	inline hw_uint<32>  peek_31() {
		return f14.back();
	}

	inline hw_uint<32>  peek_32() {
		return f16.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		if (offset == 14) {
			return f5.back();
		}
		if (offset == 15) {
			return f6.back();
		}
		if (offset == 16) {
			return f8.back();
		}
		if (offset == 17) {
			return f10.back();
		}
		if (offset == 29) {
			return f11.back();
		}
		if (offset == 30) {
			return f12.back();
		}
		if (offset == 31) {
			return f14.back();
		}
		if (offset == 32) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_blr_ds: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
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



inline void I_blr_ds_I_blr_ds_id0_0_write(hw_uint<32> & I_blr_ds_I_blr_ds_id0_0, I_blr_ds_I_blr_ds_id0_0_cache& I_blr_ds_I_blr_ds_id0_0_delay) {
	I_blr_ds_I_blr_ds_id0_0_delay.push(I_blr_ds_I_blr_ds_id0_0);
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_10_select(I_blr_ds_I_blr_ds_id0_0_cache& I_blr_ds_I_blr_ds_id0_0_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 1 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_blr_ds_I_blr_ds_id0_0 = I_blr_ds_I_blr_ds_id0_0_delay.peek_1();
	return value_I_blr_ds_I_blr_ds_id0_0;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_11_select(I_blr_ds_I_blr_ds_id0_0_cache& I_blr_ds_I_blr_ds_id0_0_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// Always 0
//	is optimizable constant: 0
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_0 = I_blr_ds_I_blr_ds_id0_0_delay.peek_0();
	return value_I_blr_ds_I_blr_ds_id0_0;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_3_select(I_blr_ds_I_blr_ds_id0_0_cache& I_blr_ds_I_blr_ds_id0_0_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 32 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_blr_ds_I_blr_ds_id0_0 = I_blr_ds_I_blr_ds_id0_0_delay.peek_32();
	return value_I_blr_ds_I_blr_ds_id0_0;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_4_select(I_blr_ds_I_blr_ds_id0_0_cache& I_blr_ds_I_blr_ds_id0_0_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 31 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_blr_ds_I_blr_ds_id0_0 = I_blr_ds_I_blr_ds_id0_0_delay.peek_31();
	return value_I_blr_ds_I_blr_ds_id0_0;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_5_select(I_blr_ds_I_blr_ds_id0_0_cache& I_blr_ds_I_blr_ds_id0_0_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 11 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 30 }
// 	is always true on iteration domain: 0
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c = 12] : 0 <= I_blr_ds_blr_r <= 12 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> (18 + I_blr_ds_blr_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 1
	int value_I_blr_ds_I_blr_ds_id0_0 = I_blr_ds_I_blr_ds_id0_0_delay.peek_30();
	return value_I_blr_ds_I_blr_ds_id0_0;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_6_select(I_blr_ds_I_blr_ds_id0_0_cache& I_blr_ds_I_blr_ds_id0_0_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 17 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_blr_ds_I_blr_ds_id0_0 = I_blr_ds_I_blr_ds_id0_0_delay.peek_17();
	return value_I_blr_ds_I_blr_ds_id0_0;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_7_select(I_blr_ds_I_blr_ds_id0_0_cache& I_blr_ds_I_blr_ds_id0_0_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 16 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_blr_ds_I_blr_ds_id0_0 = I_blr_ds_I_blr_ds_id0_0_delay.peek_16();
	return value_I_blr_ds_I_blr_ds_id0_0;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_8_select(I_blr_ds_I_blr_ds_id0_0_cache& I_blr_ds_I_blr_ds_id0_0_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 11 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 15 }
// 	is always true on iteration domain: 0
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c = 12] : 0 <= I_blr_ds_blr_r <= 12 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> (3 + I_blr_ds_blr_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 1
	int value_I_blr_ds_I_blr_ds_id0_0 = I_blr_ds_I_blr_ds_id0_0_delay.peek_15();
	return value_I_blr_ds_I_blr_ds_id0_0;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_9_select(I_blr_ds_I_blr_ds_id0_0_cache& I_blr_ds_I_blr_ds_id0_0_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 2 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_blr_ds_I_blr_ds_id0_0 = I_blr_ds_I_blr_ds_id0_0_delay.peek_2();
	return value_I_blr_ds_I_blr_ds_id0_0;
}

// Bundles...
// I_blr_ds_blr_conv_3_30_read
//	I_blr_ds_I_blr_ds_blr_conv_3_30_3
//	I_blr_ds_I_blr_ds_blr_conv_3_30_4
//	I_blr_ds_I_blr_ds_blr_conv_3_30_5
//	I_blr_ds_I_blr_ds_blr_conv_3_30_6
//	I_blr_ds_I_blr_ds_blr_conv_3_30_7
//	I_blr_ds_I_blr_ds_blr_conv_3_30_8
//	I_blr_ds_I_blr_ds_blr_conv_3_30_9
//	I_blr_ds_I_blr_ds_blr_conv_3_30_10
//	I_blr_ds_I_blr_ds_blr_conv_3_30_11
inline hw_uint<288> I_blr_ds_I_blr_ds_blr_conv_3_30_read_bundle_read(I_blr_ds_I_blr_ds_id0_0_cache& I_blr_ds_I_blr_ds_id0_0_delay, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	hw_uint<288> result;
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_3_res = I_blr_ds_I_blr_ds_blr_conv_3_30_3_select(I_blr_ds_I_blr_ds_id0_0_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<0, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_3_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_4_res = I_blr_ds_I_blr_ds_blr_conv_3_30_4_select(I_blr_ds_I_blr_ds_id0_0_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<32, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_4_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_5_res = I_blr_ds_I_blr_ds_blr_conv_3_30_5_select(I_blr_ds_I_blr_ds_id0_0_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<64, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_5_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_6_res = I_blr_ds_I_blr_ds_blr_conv_3_30_6_select(I_blr_ds_I_blr_ds_id0_0_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<96, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_6_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_7_res = I_blr_ds_I_blr_ds_blr_conv_3_30_7_select(I_blr_ds_I_blr_ds_id0_0_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<128, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_7_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_8_res = I_blr_ds_I_blr_ds_blr_conv_3_30_8_select(I_blr_ds_I_blr_ds_id0_0_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<160, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_8_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_9_res = I_blr_ds_I_blr_ds_blr_conv_3_30_9_select(I_blr_ds_I_blr_ds_id0_0_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<192, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_9_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_10_res = I_blr_ds_I_blr_ds_blr_conv_3_30_10_select(I_blr_ds_I_blr_ds_id0_0_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<224, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_10_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_11_res = I_blr_ds_I_blr_ds_blr_conv_3_30_11_select(I_blr_ds_I_blr_ds_id0_0_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<256, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_11_res);
	return result;
}

// I_blr_ds_id0_write
//	I_blr_ds_I_blr_ds_id0_0
inline void I_blr_ds_I_blr_ds_id0_write_bundle_write(hw_uint<32> & /* width = 32*/I_blr_ds_id0_write, I_blr_ds_I_blr_ds_id0_0_cache& I_blr_ds_I_blr_ds_id0_0_delay) {
	I_blr_ds_I_blr_ds_id0_0_write(I_blr_ds_id0_write, I_blr_ds_I_blr_ds_id0_0_delay);
}



#include "hw_classes.h"

struct I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_cache {
	// Capacity: 71
	fifo<hw_uint<32> , 71> f;
	inline hw_uint<32>  peek(const int offset) {
		return f.peek(70 - offset);
	}

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
		return f.peek(53);
	}

	inline hw_uint<32>  peek_54() {
		return f.peek(54);
	}

	inline hw_uint<32>  peek_55() {
		return f.peek(55);
	}

	inline hw_uint<32>  peek_56() {
		return f.peek(56);
	}

	inline hw_uint<32>  peek_57() {
		return f.peek(57);
	}

	inline hw_uint<32>  peek_58() {
		return f.peek(58);
	}

	inline hw_uint<32>  peek_59() {
		return f.peek(59);
	}

	inline hw_uint<32>  peek_60() {
		return f.peek(60);
	}

	inline hw_uint<32>  peek_61() {
		return f.peek(61);
	}

	inline hw_uint<32>  peek_62() {
		return f.peek(62);
	}

	inline hw_uint<32>  peek_63() {
		return f.peek(63);
	}

	inline hw_uint<32>  peek_64() {
		return f.peek(64);
	}

	inline hw_uint<32>  peek_65() {
		return f.peek(65);
	}

	inline hw_uint<32>  peek_66() {
		return f.peek(66);
	}

	inline hw_uint<32>  peek_67() {
		return f.peek(67);
	}

	inline hw_uint<32>  peek_68() {
		return f.peek(68);
	}

	inline hw_uint<32>  peek_69() {
		return f.peek(69);
	}

	inline hw_uint<32>  peek_70() {
		return f.peek(70);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		return f.push(value);
	}

};



inline void I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_write(hw_uint<32> & I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_delay) {
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_delay.push(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2);
}

inline hw_uint<32>  I_blr_ds_blr_I_blr_ds_blr_ds_id0_15_select(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_delay
, int root, int I_blr_ds_blr_ds_r, int I_blr_ds_blr_ds_c) {
// Pieces...
// { I_blr_ds_blr_ds_id0[root = 0, I_blr_ds_blr_ds_r = 5, I_blr_ds_blr_ds_c] : 0 <= I_blr_ds_blr_ds_c <= 3 } -> { I_blr_ds_blr_ds_id0[root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> (5 - I_blr_ds_blr_ds_c) }
// 	is always true on iteration domain: 0
// { I_blr_ds_blr_ds_id0[root = 0, I_blr_ds_blr_ds_r = 5, I_blr_ds_blr_ds_c = 4] } -> { I_blr_ds_blr_ds_id0[root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> 1 }
// 	is always true on iteration domain: 0
// { I_blr_ds_blr_ds_id0[root = 0, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] : 0 <= I_blr_ds_blr_ds_r <= 3 and 0 <= I_blr_ds_blr_ds_c <= 5 } -> { I_blr_ds_blr_ds_id0[root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> ((70 - 13 * I_blr_ds_blr_ds_r) - I_blr_ds_blr_ds_c) }
// 	is always true on iteration domain: 0
// { I_blr_ds_blr_ds_id0[root = 0, I_blr_ds_blr_ds_r = 4, I_blr_ds_blr_ds_c] : 0 <= I_blr_ds_blr_ds_c <= 5 } -> { I_blr_ds_blr_ds_id0[root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> (18 - I_blr_ds_blr_ds_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	int value_I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2 = I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_delay.peek(((-5 + I_blr_ds_blr_ds_r == 0 && root == 0 && I_blr_ds_blr_ds_c >= 0 && 3 - I_blr_ds_blr_ds_c >= 0) ? ((5 - I_blr_ds_blr_ds_c)) : (-4 + I_blr_ds_blr_ds_c == 0 && -5 + I_blr_ds_blr_ds_r == 0 && root == 0) ? (1) : (root == 0 && I_blr_ds_blr_ds_r >= 0 && 3 - I_blr_ds_blr_ds_r >= 0 && I_blr_ds_blr_ds_c >= 0 && 5 - I_blr_ds_blr_ds_c >= 0) ? (((70 - 13 * I_blr_ds_blr_ds_r) - I_blr_ds_blr_ds_c)) : (-4 + I_blr_ds_blr_ds_r == 0 && root == 0 && I_blr_ds_blr_ds_c >= 0 && 5 - I_blr_ds_blr_ds_c >= 0) ? ((18 - I_blr_ds_blr_ds_c)) : 0));
	return value_I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2;
}

// Bundles...
// I_blr_ds_blr_conv_3_30_write
//	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2
inline void I_blr_ds_blr_I_blr_ds_blr_conv_3_30_write_bundle_write(hw_uint<32> & /* width = 32*/I_blr_ds_blr_conv_3_30_write, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_delay) {
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_write(I_blr_ds_blr_conv_3_30_write, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_delay);
}

// I_blr_ds_blr_ds_id0_read
//	I_blr_ds_blr_I_blr_ds_blr_ds_id0_15
inline hw_uint<32> I_blr_ds_blr_I_blr_ds_blr_ds_id0_read_bundle_read(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_delay, int root, int I_blr_ds_blr_ds_r, int I_blr_ds_blr_ds_c) {
	hw_uint<32> result;
	hw_uint<32>  I_blr_ds_blr_I_blr_ds_blr_ds_id0_15_res = I_blr_ds_blr_I_blr_ds_blr_ds_id0_15_select(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_delay, root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c);
	set_at<0, 32>(result, I_blr_ds_blr_I_blr_ds_blr_ds_id0_15_res);
	return result;
}



#include "hw_classes.h"

struct I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14_cache {
	// Capacity: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
		return f.peek(0 - offset);
	}

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		return f.push(value);
	}

};



inline void I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14_write(hw_uint<32> & I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14, I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14_cache& I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14_delay) {
	I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14_delay.push(I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14);
}

inline hw_uint<32>  I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_13_select(I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14_cache& I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14_delay
, int root, int I_blr_ds_blr_ds_out_r, int I_blr_ds_blr_ds_out_c) {
// Pieces...
// Always 0
//	is optimizable constant: 0
	hw_uint<32>  value_I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14 = I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14_delay.peek_0();
	return value_I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14;
}

// Bundles...
// I_blr_ds_blr_ds_id0_write
//	I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14
inline void I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_write_bundle_write(hw_uint<32> & /* width = 32*/I_blr_ds_blr_ds_id0_write, I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14_cache& I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14_delay) {
	I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14_write(I_blr_ds_blr_ds_id0_write, I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14_delay);
}

// store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_read
//	I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_13
inline hw_uint<32> I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_read_bundle_read(I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14_cache& I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14_delay, int root, int I_blr_ds_blr_ds_out_r, int I_blr_ds_blr_ds_out_c) {
	hw_uint<32> result;
	hw_uint<32>  I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_13_res = I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_13_select(I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14_delay, root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c);
	set_at<0, 32>(result, I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_13_res);
	return result;
}





// Operation logic
inline void I_blr_ds_id0(I_blr_I_blr_conv_3_30_18_cache& I_blr_I_blr_conv_3_30_18, I_blr_ds_I_blr_ds_id0_0_cache& I_blr_ds_I_blr_ds_id0_0, int root, int I_blr_ds_r, int I_blr_ds_c) {
	// Consume: I_blr
	auto I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value = I_blr_I_blr_ds_id0_read_bundle_read(I_blr_I_blr_conv_3_30_18/* source_delay */, root, I_blr_ds_r, I_blr_ds_c);
	// Apply function: id
	// Arg: I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value
	// Arg buf: I_blr
	 /* comma list args */ auto compute_result = id(I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value);
	// Produce: I_blr_ds
	// Buffer: I_blr_ds, Op: I_blr_ds_id0
	// Possible ports...
		// I_blr_ds_I_blr_ds_id0_0
	I_blr_ds_I_blr_ds_id0_write_bundle_write(compute_result, I_blr_ds_I_blr_ds_id0_0 /* output src_delay */);
}

inline void I_blr_ds_blr_conv_3_30(I_blr_ds_I_blr_ds_id0_0_cache& I_blr_ds_I_blr_ds_id0_0, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// Consume: I_blr_ds
	auto I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value = I_blr_ds_I_blr_ds_blr_conv_3_30_read_bundle_read(I_blr_ds_I_blr_ds_id0_0/* source_delay */, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	// Apply function: conv_3_3
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__1_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__2_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__1_c__I_blr_ds_blr_c__p__0_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__1_c__I_blr_ds_blr_c__p__1_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__1_c__I_blr_ds_blr_c__p__2_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__2_c__I_blr_ds_blr_c__p__0_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__2_c__I_blr_ds_blr_c__p__1_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__2_c__I_blr_ds_blr_c__p__2_value
	// Arg buf: I_blr_ds
	 /* comma list args */ auto compute_result = conv_3_3(I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value);
	// Produce: I_blr_ds_blr
	// Buffer: I_blr_ds_blr, Op: I_blr_ds_blr_conv_3_30
	// Possible ports...
		// I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_write_bundle_write(compute_result, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2 /* output src_delay */);
}

inline void store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds(I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14_cache& I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14, HWStream<hw_uint<32>  >& I_blr_ds_blr_ds_out, int root, int I_blr_ds_blr_ds_out_r, int I_blr_ds_blr_ds_out_c) {
	// Consume: I_blr_ds_blr_ds
	auto I_blr_ds_blr_ds_I_blr_ds_blr_ds_out_r_c__I_blr_ds_blr_ds_out_c_value = I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_read_bundle_read(I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14/* source_delay */, root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c);
	// Produce: I_blr_ds_blr_ds_out
	I_blr_ds_blr_ds_out.write(I_blr_ds_blr_ds_I_blr_ds_blr_ds_out_r_c__I_blr_ds_blr_ds_out_c_value);
}

inline void I_blr_ds_blr_ds_id0(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2, I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14_cache& I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14, int root, int I_blr_ds_blr_ds_r, int I_blr_ds_blr_ds_c) {
	// Consume: I_blr_ds_blr
	auto I_blr_ds_blr_2_m_I_blr_ds_blr_ds_r_c__2_m_I_blr_ds_blr_ds_c_value = I_blr_ds_blr_I_blr_ds_blr_ds_id0_read_bundle_read(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2/* source_delay */, root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c);
	// Apply function: id
	// Arg: I_blr_ds_blr_2_m_I_blr_ds_blr_ds_r_c__2_m_I_blr_ds_blr_ds_c_value
	// Arg buf: I_blr_ds_blr
	 /* comma list args */ auto compute_result = id(I_blr_ds_blr_2_m_I_blr_ds_blr_ds_r_c__2_m_I_blr_ds_blr_ds_c_value);
	// Produce: I_blr_ds_blr_ds
	// Buffer: I_blr_ds_blr_ds, Op: I_blr_ds_blr_ds_id0
	// Possible ports...
		// I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14
	I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_write_bundle_write(compute_result, I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14 /* output src_delay */);
}

inline void store_I_from_in(HWStream<hw_uint<32>  >& in, I_store_I_from_in_16_cache& I_store_I_from_in_16, int root, int pr, int pc) {
	// Consume: in
	auto in_pr_c__pc_value = in.read();
	// Produce: I
	// Buffer: I, Op: store_I_from_in
	// Possible ports...
		// I_store_I_from_in_16
	I_store_I_from_in_write_bundle_write(in_pr_c__pc_value, I_store_I_from_in_16 /* output src_delay */);
}

inline void I_blr_conv_3_30(I_store_I_from_in_16_cache& I_store_I_from_in_16, I_blr_I_blr_conv_3_30_18_cache& I_blr_I_blr_conv_3_30_18, int root, int I_blr_r, int I_blr_c) {
	// Consume: I
	auto I_I_blr_r__p__0_c__I_blr_c__p__0_value = I_I_blr_conv_3_30_read_bundle_read(I_store_I_from_in_16/* source_delay */, root, I_blr_r, I_blr_c);
	// Apply function: conv_3_3
	// Arg: I_I_blr_r__p__0_c__I_blr_c__p__0_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__0_c__I_blr_c__p__1_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__0_c__I_blr_c__p__2_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__1_c__I_blr_c__p__0_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__1_c__I_blr_c__p__1_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__1_c__I_blr_c__p__2_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__2_c__I_blr_c__p__0_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__2_c__I_blr_c__p__1_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__2_c__I_blr_c__p__2_value
	// Arg buf: I
	 /* comma list args */ auto compute_result = conv_3_3(I_I_blr_r__p__0_c__I_blr_c__p__0_value);
	// Produce: I_blr
	// Buffer: I_blr, Op: I_blr_conv_3_30
	// Possible ports...
		// I_blr_I_blr_conv_3_30_18
	I_blr_I_blr_conv_3_30_write_bundle_write(compute_result, I_blr_I_blr_conv_3_30_18 /* output src_delay */);
}

// Driver function
void gaussian_pyramid(HWStream<hw_uint<32>  >& in, HWStream<hw_uint<32> >& I_blr_ds_blr_ds_out) {
	I_store_I_from_in_16_cache I_store_I_from_in_16;
	I_blr_I_blr_conv_3_30_18_cache I_blr_I_blr_conv_3_30_18;
	I_blr_ds_I_blr_ds_id0_0_cache I_blr_ds_I_blr_ds_id0_0;
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_cache I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2;
	I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14_cache I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14;
	for (int c0 = 0; c0 <= 31; c0 += 1)
	  for (int c1 = 0; c1 <= 31; c1 += 1) {
	    store_I_from_in(in, I_store_I_from_in_16, 0, c0, c1);
	    if (c0 >= 2 && c1 >= 2) {
	      I_blr_conv_3_30(I_store_I_from_in_16, I_blr_I_blr_conv_3_30_18, 0, c0 - 2, c1 - 2);
	      if (c0 >= 16 && c0 <= 30 && c1 >= 16 && c1 <= 30) {
	        I_blr_ds_id0(I_blr_I_blr_conv_3_30_18, I_blr_ds_I_blr_ds_id0_0, 0, c0 - 16, c1 - 16);
	        if (c0 >= 18 && c1 >= 18) {
	          I_blr_ds_blr_conv_3_30(I_blr_ds_I_blr_ds_id0_0, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2, 0, c0 - 18, c1 - 18);
	          if (c0 >= 23 && c0 <= 28 && c1 >= 23 && c1 <= 28) {
	            I_blr_ds_blr_ds_id0(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2, I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14, 0, c0 - 23, c1 - 23);
	            store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds(I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_14, I_blr_ds_blr_ds_out, 0, c0 - 23, c1 - 23);
	          }
	        }
	      }
	    }
	  }
	
}
