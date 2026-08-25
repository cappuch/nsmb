#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"

// MainProfileTable slot 120  |  ov108  |  profile @ 0x0218aef0
class Object120 : public StageEntity {
public:
	static void *create();
	inline Object120() {};
	inline ~Object120() {};
	u8 _pad0[0x138];
};

extern ActorProfile Object120_Profile;

