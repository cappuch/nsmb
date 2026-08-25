#include "Object336.hpp"

void *Object336::create()
{
	return new Object336();
}

// 0x02138d90
ActorProfile Object336_Profile = { Object336::create, 336, 336, NULL };

void Object336::pendingDestroy() {

}

s32 Object336::onDestroy() {
	return 1;
}

extern "C" void func_ov130_02130ef4() {

}
