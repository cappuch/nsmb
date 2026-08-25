#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
extern "C" void* _ZTV7Vec3_32[];

// MainProfileTable slot 28  |  ov025  |  profile @ 0x02141800
class Object28 : public StageEntity {
public:
	static void *create();
	inline Object28();
	inline ~Object28() {};
	u8 _p0[0xe0];
	u8 _pT[0x87c];
};

inline Object28::Object28() {
	*(void **)((char *)this + 0x4d4) = &_ZTV7Vec3_32[2];
}

extern ActorProfile Object28_Profile;

// MainProfileTable slot 30  |  ov025  |  profile @ 0x0214180c
class Object30 : public StageEntity {
public:
	static void *create();
	inline Object30() {};
	inline ~Object30() {};
};

extern ActorProfile Object30_Profile;

