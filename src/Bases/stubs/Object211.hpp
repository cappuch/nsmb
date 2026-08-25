#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
#include "../../Collision/Collider.hpp"
extern "C" void* _ZTV7Vec3_32[];

// MainProfileTable slot 211  |  ov010  |  profile @ 0x0212704c
class Object211 : public StageEntity {
public:
	static void *create();
	inline Object211();
	inline ~Object211() {};
	u8 _p0[0x1ec];
	Collider _m1;
	u8 _p2[0xc];
	u8 _p5[0x38];
	u8 _pT[0x34];
};

inline Object211::Object211() {
	*(void **)((char *)this + 0x64c) = &_ZTV7Vec3_32[2];
	*(void **)((char *)this + 0x65c) = &_ZTV7Vec3_32[2];
	*(void **)((char *)this + 0x6a4) = &_ZTV7Vec3_32[2];
}

extern ActorProfile Object211_Profile;

