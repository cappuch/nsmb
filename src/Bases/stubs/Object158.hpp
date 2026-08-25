#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"

// MainProfileTable slots 158, 159 share this class.
// ov054  |  vtable @ 0x0216ff70
class Object158 : public StageEntity {
public:
	static void *create();
	static void *create2();
	inline Object158() {};
	inline ~Object158() {};
	u8 _pad0[0x128];
};

extern ActorProfile Object159_Profile;
extern ActorProfile Object158_Profile;
