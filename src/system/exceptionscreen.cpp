#include "../nsmb_nitro.hpp"

extern "C" void func_02006438(s16* out, s16 a, s16 b) {
	*out = a + b;
}

extern "C" void func_020063f8(s16* out, s16 a, s8* str) {
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

extern "C" void func_020063c4(s16* out, s16 a) {
	char buf[0x84];
	Nitro::func_020643d4(buf, 0x81);
	func_020063f8(out, a, (s8*)buf);
}

extern "C" void func_02005cdc(void) {
	do {} while (*(volatile u16*)0x04000006 >= 0xc0);
	do {} while (*(volatile u16*)0x04000006 < 0xc0);
}