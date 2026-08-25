#include "Object308.hpp"

void *Object308::create()
{
	return new Object308();
}

// 0x020daea0
ActorProfile Object308_Profile = { Object308::create, 308, 299, NULL /* TODO: 0x020d7340 */ };

extern "C" void func_ov009_020d7580() {

}

extern "C" int func_ov009_020d7584() {
	return 1;
}
