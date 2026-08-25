#include "Object314.hpp"

void *Object314::create()
{
	return new Object314();
}

// 0x020ee2c8
ActorProfile Object314_Profile = { Object314::create, 314, 305, NULL };

extern "C" void * data_ov008_020f14f0() {
	return &data_ov008_020f14f0;
}

extern "C" int func_ov008_020e0760() {
	return 1;
}

extern "C" int func_ov008_020e090c() {
	return 1;
}

extern "C" int func_ov008_020e0dec() {
	return 1;
}

extern "C" int func_ov008_020e0f98() {
	return 1;
}

extern "C" void func_ov008_020e1120() {

}

extern "C" int func_ov008_020e1124() {
	return 1;
}
