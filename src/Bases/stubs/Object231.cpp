#include "Object231.hpp"

void *Object231::create()
{
	return new Object231();
}

// 0x02188830
ActorProfile Object231_Profile = { Object231::create, 231, 194, NULL /* TODO: 0x02185790 */ };

void Object231::pendingDestroy() {

}

s32 Object231::onDestroy() {
	return 1;
}

extern "C" void func_ov097_021859b8() {

}

extern "C" void func_ov097_02185a08() {

}

extern "C" void func_ov097_02185b24() {

}

extern "C" void func_ov097_02185b74() {

}
