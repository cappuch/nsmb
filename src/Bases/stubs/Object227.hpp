#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"

// MainProfileTable slot 227  |  ov087  |  profile @ 0x0217f600
class Object227 : public StageEntity {
public:
	static void *create();
	inline Object227() {};
	inline ~Object227() {};
	u8 _pad0[0x108];
};

extern ActorProfile Object227_Profile;

