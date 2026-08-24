#include "../base_types.hpp"

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