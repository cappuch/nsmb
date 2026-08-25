#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
#include "../../graphics/3d/modelanm.hpp"
extern "C" void* _ZTV7Vec3_32[];

// MainProfileTable slot 147  |  ov068  |  profile @ 0x021792c0
class Object147 : public StageEntity {
public:
	static void *create();
	inline Object147();
	inline ~Object147() {};
	ModelAnm _m0;
	u8 _p1[0x8];
	u8 _pT[0x31c];
};

inline Object147::Object147() {
	*(void **)((char *)this + 0x4a4) = &_ZTV7Vec3_32[2];
}

extern ActorProfile Object147_Profile;

