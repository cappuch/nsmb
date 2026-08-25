#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
#include "../../graphics/3d/model.hpp"
extern "C" void func_0201be64(void *);

// MainProfileTable slot 227  |  ov087  |  profile @ 0x0217f600
class Object227 : public StageEntity {
public:
	static void *create();
	inline Object227();
	inline ~Object227() {};
	Model _m0;
	u8 _pT[0x78];
};

inline Object227::Object227() {
	/* none */
	func_0201be64((char *)this + 0x484);
}

extern ActorProfile Object227_Profile;

