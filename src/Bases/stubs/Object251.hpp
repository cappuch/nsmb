#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
#include "../../Collision/Collider.hpp"
extern "C" void* _ZTV7Vec2_32[];
extern "C" void* _ZTV7Vec3_32[];

// MainProfileTable slot 251  |  ov054  |  profile @ 0x0216d9ac
class Object251 : public StageEntity {
public:
	static void *create();
	inline Object251();
	inline ~Object251() {};
	u8 _p1[0x1c];
	Collider _m2;
	u8 _p3[0xc];
	u8 _pT[0x44];
};

inline Object251::Object251() {
	*(void **)((char *)this + 0x3f4) = &_ZTV7Vec2_32[2];
	*(void **)((char *)this + 0x48c) = &_ZTV7Vec3_32[2];
	*(void **)((char *)this + 0x49c) = &_ZTV7Vec2_32[2];
}

extern ActorProfile Object251_Profile;

// MainProfileTable slot 252  |  ov054  |  profile @ 0x0216d9b8
class Object252 : public StageEntity {
public:
	static void *create();
	inline Object252() {};
	inline ~Object252() {};
};

extern ActorProfile Object252_Profile;

// MainProfileTable slot 253  |  ov054  |  profile @ 0x0216d9c4
class Object253 : public StageEntity {
public:
	static void *create();
	inline Object253() {};
	inline ~Object253() {};
};

extern ActorProfile Object253_Profile;

