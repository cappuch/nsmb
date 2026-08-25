#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"

// MainProfileTable slot 171  |  ov089  |  profile @ 0x0217fba0
class Object171 : public StageEntity {
public:
	static void *create();
	inline Object171() {};
	inline ~Object171() {};
	u8 _pad0[0x118];
};

extern ActorProfile Object171_Profile;

