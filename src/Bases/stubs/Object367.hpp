#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"

// MainProfileTable slot 367  |  ov129  |  profile @ 0x021193ac
class Object367 : public StageEntity {
public:
	static void *create();
	inline Object367() {};
	inline ~Object367() {};
	u8 _pad0[0x1438];
};

extern ObjectProfile Object367_Profile;

