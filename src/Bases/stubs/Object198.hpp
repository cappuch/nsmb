#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
#include "../../graphics/3d/texture.hpp"
extern "C" void func_0201be64(void *);

// MainProfileTable slot 198  |  ov088  |  profile @ 0x021822e0
class Object198 : public StageEntity {
public:
	static void *create();
	inline Object198();
	inline ~Object198() {};
	Texture _m0;
	u8 _pT[0xdc];
};

inline Object198::Object198() {
	/* none */
	func_0201be64((char *)this + 0x44c);
}

extern ActorProfile Object198_Profile;

