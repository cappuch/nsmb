#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
#include "../../graphics/3d/model.hpp"
extern "C" void func_0201be64(void *);

// MainProfileTable slot 171  |  ov089  |  profile @ 0x0217fba0
class Object171 : public StageEntity {
public:
	static void *create();
	inline Object171();
	inline ~Object171() {};
	Model _m0;
	u8 _pT[0x88];
};

inline Object171::Object171() {
	/* none */
	func_0201be64((char *)this + 0x484);
}

extern ActorProfile Object171_Profile;

