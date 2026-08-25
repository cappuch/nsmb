#include "Object315.hpp"

void *Object315::create()
{
	return new Object315();
}

// 0x020ccd30
ActorProfile Object315_Profile = { Object315::create, 315, 306, NULL };

s32 Object315::onDestroy() {
	return 1;
}

extern "C" void func_ov004_020ccaf4() {

}
