#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
#include "../../graphics/3d/modelanm.hpp"
extern "C" void* _ZTV7Vec3_32[];

// MainProfileTable slot 148  |  ov038  |  profile @ 0x02143368
class Object148 : public StageEntity {
public:
	void pendingDestroy();
	s32 onDestroy();
	static void *create();
	inline Object148();
	inline ~Object148() {};
	ModelAnm _m0;
	u8 _p1[0x2c];
	u8 _pT[0x20];
};

inline Object148::Object148() {
	*(void **)((char *)this + 0x4c8) = &_ZTV7Vec3_32[2];
}

extern ActorProfile Object148_Profile;

