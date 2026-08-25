#include "Object311.hpp"

void *Object311::create()
{
	return new Object311();
}

// 0x020db04c
ActorProfile Object311_Profile = { Object311::create, 311, 302, NULL /* TODO: 0x020d8978 */ };

void Object311::pendingDestroy() {

}

s32 Object311::onDestroy() {
	return 1;
}

extern "C" void func_ov009_020d89c0() {

}
