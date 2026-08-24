#include "exception.hpp"

extern "C" void func_020045f8(u32);
extern u8 data_020858a0;

extern "C" void func_020045cc() {
	data_020858a0 = 1;
	func_020045f8(0);
}