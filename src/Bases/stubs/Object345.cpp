#include "Object345.hpp"

void *Object345::create()
{
	return new Object345();
}

// 0x020feb50
ObjectProfile Object345_Profile = { Object345::create, 345, 345 };

bool Object345::onUpdate_1() {
	return 1;
}

bool Object345::onUpdate_defeated() {
	return 1;
}

bool Object345::onUpdate_6() {
	return 0;
}

void Object345::pendingDestroy() {

}

bool Object345::onUpdate_8() {

}

bool Object345::_14() {

}

extern "C" int func_ov128_020b9ebc() {
	return 1;
}

extern "C" int func_ov128_020b9f30() {
	return 1;
}

extern "C" void func_ov128_020bb314() {

}

extern "C" int func_ov128_020bb650() {
	return 2;
}

extern "C" int func_ov128_020bbe90() {
	return 1;
}
