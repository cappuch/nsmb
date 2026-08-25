#include "Object78.hpp"

void *Object78::create()
{
	return new Object78();
}

// 0x0213bbec
ActorProfile Object78_Profile = { Object78::create, 78, 90, NULL };

bool Object78::_01() {
	return 0;
}

s32 Object78::onDestroy() {
	return 1;
}

void Object78::pendingDestroy() {

}
