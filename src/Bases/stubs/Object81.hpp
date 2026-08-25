#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
#include "../../graphics/3d/modelanm.hpp"
extern "C" void* _ZTV7Vec3_32[];

// MainProfileTable slot 81  |  ov035  |  profile @ 0x02143af0
class Object81 : public StageEntity {
public:
	s32 onDestroy();
	void _21();
	static void *create();
	inline Object81();
	inline ~Object81() {};
	ModelAnm _m0;
	u8 _p1[0x8];
	u8 _pT[0x18];
};

inline Object81::Object81() {
	*(void **)((char *)this + 0x4a4) = &_ZTV7Vec3_32[2];
}

extern ActorProfile Object81_Profile;

