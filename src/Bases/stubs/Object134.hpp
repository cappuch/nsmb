#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"

// MainProfileTable slot 134  |  ov123  |  profile @ 0x0218f3e8
class Object134 : public StageEntity {
public:
	static void *create();
	inline Object134() {};
	inline ~Object134() {};
	u8 _pad0[0x130];
};

extern ActorProfile Object134_Profile;

