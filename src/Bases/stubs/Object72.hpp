#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
#include "../../Collision/Collider.hpp"
extern "C" void* _ZTV7Vec3_32[];

// MainProfileTable slot 72  |  ov054  |  profile @ 0x0217067c
class Object72 : public StageEntity {
public:
	static void *create();
	inline Object72();
	inline ~Object72() {};
	u8 _p0[0x4];
	Collider _m1;
	u8 _p2[0xc];
	u8 _pT[0x1c];
};

inline Object72::Object72() {
	*(void **)((char *)this + 0x464) = &_ZTV7Vec3_32[2];
}

extern ActorProfile Object72_Profile;

