#include "../nsmb_nitro.hpp"

extern "C" void func_020063f8(s16* out, s16 a, volatile s8* str);
extern "C" void func_02006438(s16* out, s16 a, s16 b);

extern "C" void func_020063c4(s16* out, s16 a) {
	char buf[0x84];
	Nitro::func_020643d4(buf, 0x81);
	func_020063f8(out, a, (s8*)buf);
}

extern "C" void func_020063f8(s16* out, s16 a, volatile s8* str) {
	if (*str == 0) {
		return;
	}
	do {
		s8 c = *str;
		func_02006438(out, a, c);
		str++;
		out++;
	} while (*str != 0);
}

extern "C" void func_02006438(s16* out, s16 a, s16 b) {
	*out = a + b;
}

extern "C" bool func_02006300(u32 param_1, s32 param_2) {
	u32 sum = param_1 + param_2;
	u32 a = Nitro::func_0206621c();
	u32 limit = 0x027e0000;
	if (*(volatile u32*)0x02094510 == 0) {
		limit = 0x023ff000;
	}
	if ((param_1 < 0x2000000 || limit < sum) &&
		(param_1 < a || a + 0x4000 < sum)) {
		return 0;
	}
	return 1;
}

extern "C" void func_02005cdc(void) {
	do {} while (*(volatile u16*)0x04000006 >= 0xc0);
	do {} while (*(volatile u16*)0x04000006 < 0xc0);
}