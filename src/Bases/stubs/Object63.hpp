#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
extern "C" void* _ZTV7Vec3_32[];

// MainProfileTable slot 63  |  ov080  |  profile @ 0x0217d810
class Object63 : public StageEntity {
public:
	static void *create();
	inline Object63();
	inline ~Object63() {};
	u8 _pT[0x20];
};

inline Object63::Object63() {
	*(void **)((char *)this + 0x3f4) = &_ZTV7Vec3_32[2];
}

extern ActorProfile Object63_Profile;

