#include "../nsmb_nitro.hpp"

extern "C" void func_020063f8(s16* out, u16 a, volatile s8* str);
extern "C" void func_02006438(s16* out, u16 a, s16 b);
extern "C" void func_020063c4(s16* out, u16 a);

extern "C" void func_020063ac(s16* param1, s16* param2, s8* param3) {
	func_020063f8(param2, *(u16*)(param1 + 1), (volatile s8*)param3);
}

extern "C" void func_020063c4(s16* out, u16 a) {
	char buf[0x84];
	Nitro::func_020643d4(buf, 0x81);
	func_020063f8(out, a, (s8*)buf);
}

extern "C" void func_020063f8(s16* out, u16 a, volatile s8* str) {
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

extern "C" void func_02006438(s16* out, u16 a, s16 b) {
	*out = a + b;
}

extern u32 data_02094510;
extern u32 data_027e0000;

extern "C" bool func_02006300(u32 param_1, s32 param_2) {
	u32 sum = param_1 + param_2;
	u32 a = Nitro::func_0206621c();
	u32 aEnd = a + 0x4000;
	u32 limit = ((*(volatile u32 *)&data_02094510) != 0) ? ((u32)&data_027e0000) : 0x023ff000;

	if ((param_1 >= 0x2000000 && sum <= limit) ||
		(a <= param_1 && sum <= aEnd)) {
		return 1;
	}
	return 0;
}

extern "C" void func_02005ea8(u32, u32, u32);
extern u32 data_020859ec;
extern u32 data_020859e8;

extern "C" void func_02005e68(void) {
	u32 a = data_020859ec;
	u32 b = data_020859e8;
	func_02005ea8(0x7f007f, a, 0x800);
	func_02005ea8(0x7f007f, b, 0x800);
}

extern "C" void DebugScreenWaitForVblank(void) {
	do {} while ((s32)(*(volatile u16*)0x04000006) >= 0xc0);
	do {} while ((s32)(*(volatile u16*)0x04000006) < 0xc0);
}