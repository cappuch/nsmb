#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
#include "../../graphics/3d/model.hpp"
extern "C" void func_0201be64(void *);

// MainProfileTable slot 215  |  ov118  |  profile @ 0x0218fd88
class Object215 : public StageEntity {
public:
	static void *create();
	inline Object215();
	inline ~Object215() {};
	Model _m0;
	u8 _pT[0xa4];
};

inline Object215::Object215() {
	/* none */
	func_0201be64((char *)this + 0x484);
}

extern ActorProfile Object215_Profile;

