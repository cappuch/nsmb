#include "Object36.hpp"

void *Object36::create()
{
	return new Object36();
}

// 0x021320a0
ActorProfile Object36_Profile = { Object36::create, 36, 49, NULL /* TODO: 0x02130864 */ };

void Object36::pendingDestroy() {

}

extern "C" void func_ov012_0213085c() {

}

extern "C" void func_ov012_02130860() {

}
