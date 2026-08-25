#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
extern "C" void* _ZTV7Vec3_16[];
extern "C" void* _ZTV7Vec3_32[];

// MainProfileTable slot 212  |  ov116  |  profile @ 0x0218f168
class Object212 : public StageEntity {
public:
	static void *create();
	inline Object212();
	inline ~Object212() {};
	u8 _p0[0x244];
	u8 _pT[0x90];
};

inline Object212::Object212() {
	*(void **)((char *)this + 0x638) = &_ZTV7Vec3_32[2];
	*(void **)((char *)this + 0x648) = &_ZTV7Vec3_32[2];
	*(void **)((char *)this + 0x658) = &_ZTV7Vec3_32[2];
	*(void **)((char *)this + 0x668) = &_ZTV7Vec3_32[2];
	*(void **)((char *)this + 0x678) = &_ZTV7Vec3_32[2];
	*(void **)((char *)this + 0x688) = &_ZTV7Vec3_16[2];
}

extern ActorProfile Object212_Profile;

