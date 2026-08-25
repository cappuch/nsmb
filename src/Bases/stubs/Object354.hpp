#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"

// MainProfileTable slot 354  |  ov128  |  profile @ 0x021005f0
class Object354 : public StageEntity {
public:
	static void *create();
	inline Object354() {};
	inline ~Object354() {};
	u8 _pad0[0x26f4];
};

extern ObjectProfile Object354_Profile;

