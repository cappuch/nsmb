#include "Object77.hpp"

void *Object77::create()
{
	return new Object77();
}

// 0x021321ec
ActorProfile Object77_Profile = { Object77::create, 77, 89, NULL /* TODO: 0x02130e9c */ };

s32 Object77::onDestroy() {
	return 1;
}

void Object77::pendingDestroy() {

}

extern "C" int func_ov012_02130dc0() {
	return 0;
}
