#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
extern "C" void* _ZTV7Vec3_32[];

// MainProfileTable slot 129  |  ov017  |  profile @ 0x02133bd0
class Object129 : public StageEntity {
public:
	void entityCollision();
	void _27();
	void _26();
	void _25();
	void _24();
	void _22();
	static void *create();
	inline Object129();
	inline ~Object129() {};
	u8 _p0[0xd4];
	u8 _pT[0xe8];
};

inline Object129::Object129() {
	*(void **)((char *)this + 0x4c8) = &_ZTV7Vec3_32[2];
	*(void **)((char *)this + 0x4d8) = &_ZTV7Vec3_32[2];
	*(void **)((char *)this + 0x4e8) = &_ZTV7Vec3_32[2];
}

extern ActorProfile Object129_Profile;

