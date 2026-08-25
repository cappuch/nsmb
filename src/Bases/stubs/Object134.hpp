#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
extern "C" void* _ZTV7Vec3_32[];

// MainProfileTable slot 134  |  ov123  |  profile @ 0x0218f3e8
class Object134 : public StageEntity {
public:
	static void *create();
	inline Object134();
	inline ~Object134() {};
	u8 _p0[0xcc];
	u8 _pT[0x64];
};

inline Object134::Object134() {
	*(void **)((char *)this + 0x4c0) = &_ZTV7Vec3_32[2];
}

extern ActorProfile Object134_Profile;

