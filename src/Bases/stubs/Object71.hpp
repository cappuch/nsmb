#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
#include "../../Collision/Collider.hpp"
extern "C" void* _ZTV7Vec3_32[];

// MainProfileTable slot 71  |  ov054  |  profile @ 0x02170538
class Object71 : public StageEntity {
public:
	static void *create();
	inline Object71();
	inline ~Object71() {};
	u8 _p0[0x4];
	Collider _m1;
	u8 _p2[0xc];
	u8 _pT[0x20];
};

inline Object71::Object71() {
	*(void **)((char *)this + 0x464) = &_ZTV7Vec3_32[2];
}

extern ActorProfile Object71_Profile;

