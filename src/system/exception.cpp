#include "exception.hpp"

extern "C" void func_020045f8(u32);
extern u8 data_020858a0;

extern "C" void func_020045cc() {
	data_020858a0 = 1;
	func_020045f8(0);
}

extern "C" void func_02000738(u32);

extern "C" void func_02004664(u32 param_1, u32 param_2) {
	if (Nitro::func_020689fc(0xe, param_1, 0) == 0) {
		return;
	}
	do {
		func_02000738(param_2);
	} while (Nitro::func_020689fc(0xe, param_1, 0) != 0);
}