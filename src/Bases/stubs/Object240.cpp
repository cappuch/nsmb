#include "Object240.hpp"

void *Object240::create()
{
	return new Object240();
}

// 0x02124014
ActorProfile Object240_Profile = { Object240::create, 240, 43, NULL };

extern "C" void func_ov010_020cf698() {

}

extern "C" void func_ov010_020d052c() {

}
