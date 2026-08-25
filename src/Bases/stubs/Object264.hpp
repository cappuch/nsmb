#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
#include "../../Collision/Collider.hpp"
extern "C" void* _ZTV7Vec2_32[];
extern "C" void* _ZTV7Vec3_32[];

// MainProfileTable slot 264  |  ov123  |  profile @ 0x0218f550
class Object264 : public StageEntity {
public:
	static void *create();
	inline Object264();
	inline ~Object264() {};
	u8 _p1[0x1c];
	Collider _m2;
	u8 _p3[0x28];
	u8 _pT[0x48];
};

inline Object264::Object264() {
	*(void **)((char *)this + 0x3f4) = &_ZTV7Vec2_32[2];
	*(void **)((char *)this + 0x4a8) = &_ZTV7Vec3_32[2];
	*(void **)((char *)this + 0x4b8) = &_ZTV7Vec3_32[2];
}

extern ActorProfile Object264_Profile;

