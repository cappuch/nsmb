#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"

// MainProfileTable slot 198  |  ov088  |  profile @ 0x021822e0
class Object198 : public StageEntity {
public:
	static void *create();
	inline Object198() {};
	inline ~Object198() {};
	u8 _pad0[0xe4];
};

extern ActorProfile Object198_Profile;

