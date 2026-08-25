#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
#include "../../Collision/Collider.hpp"
extern "C" void* _ZTV7Vec3_32[];

// MainProfileTable slot 265  |  ov013  |  profile @ 0x0213bd2c
class Object265 : public StageEntity {
public:
	static void *create();
	inline Object265();
	inline ~Object265() {};
	Collider _m0;
	u8 _p1[0xc];
	u8 _pT[0x54];
};

inline Object265::Object265() {
	*(void **)((char *)this + 0x460) = &_ZTV7Vec3_32[2];
	*(void **)((char *)this + 0x470) = &_ZTV7Vec3_32[2];
}

extern ActorProfile Object265_Profile;

