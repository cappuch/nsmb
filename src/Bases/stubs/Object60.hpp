#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
extern "C" void* _ZTV7Vec3_32[];

// MainProfileTable slot 60  |  ov025  |  profile @ 0x021416b0
class Object60 : public StageEntity {
public:
	static void *create();
	inline Object60();
	inline ~Object60() {};
	u8 _p0[0xc];
	u8 _pT[0x40];
};

inline Object60::Object60() {
	*(void **)((char *)this + 0x400) = &_ZTV7Vec3_32[2];
	*(void **)((char *)this + 0x410) = &_ZTV7Vec3_32[2];
}

extern ActorProfile Object60_Profile;

