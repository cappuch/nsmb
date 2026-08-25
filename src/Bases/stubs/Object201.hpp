#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
#include "../../graphics/3d/texture.hpp"

// MainProfileTable slot 201  |  ov060  |  profile @ 0x021734e0
class Object201 : public StageEntity {
public:
	static void *create();
	inline Object201();
	inline ~Object201() {};
	Texture _m0;
	u8 _pT[0x1a74];
};

inline Object201::Object201() {
	/* none */
}

extern ActorProfile Object201_Profile;

