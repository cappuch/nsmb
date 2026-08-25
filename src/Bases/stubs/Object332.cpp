#include "Object332.hpp"

void *Object332::create()
{
	return new Object332();
}

// 0x02138ce4
ObjectProfile Object332_Profile = { Object332::create, 332, 332 };

s32 Object332::onDestroy() {
	return 1;
}

extern "C" void func_ov130_0212ef6c() {

}
