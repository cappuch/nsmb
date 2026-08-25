#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"

extern "C" void* _ZTV7Vec3_32[];

// MainProfileTable slot 61  |  ov078  |  profile @ 0x0217b4c0
class Object61 : public StageEntity {
public:
	static void *create();
	inline Object61() {
		((void **)this)[0xFD] = &_ZTV7Vec3_32[2];
	};
	inline ~Object61() {};
	u8 _pad0[0x34];
};

extern ActorProfile Object61_Profile;
