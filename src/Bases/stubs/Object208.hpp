#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
#include "../../graphics/3d/model.hpp"
extern "C" void func_0201be64(void *);

// MainProfileTable slot 208  |  ov096  |  profile @ 0x02188208
class Object208 : public StageEntity {
public:
	static void *create();
	inline Object208();
	inline ~Object208() {};
	Model _m0;
	u8 _pT[0x98];
};

inline Object208::Object208() {
	/* none */
	func_0201be64((char *)this + 0x4ac);
}

extern ActorProfile Object208_Profile;

