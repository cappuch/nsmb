#include "Object230.hpp"

void *Object230::create()
{
	return new Object230();
}

// 0x02181f00
ActorProfile Object230_Profile = { Object230::create, 230, 193, NULL /* TODO: 0x0217dcb8 */ };

void Object230::pendingDestroy() {

}

s32 Object230::onDestroy() {
	return 1;
}

extern "C" void func_ov088_0217df78() {

}

extern "C" void func_ov088_0217e0bc() {

}
