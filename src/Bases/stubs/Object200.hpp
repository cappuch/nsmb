#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
#include "../../graphics/3d/texture.hpp"

// MainProfileTable slot 200  |  ov116  |  profile @ 0x0218efc0
class Object200 : public StageEntity {
public:
	static void *create();
	inline Object200();
	inline ~Object200() {};
	Texture _m0;
	u8 _pT[0x18ec];
};

inline Object200::Object200() {
	/* none */
}

extern ActorProfile Object200_Profile;

