#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"

// MainProfileTable slot 91  |  ov036  |  profile @ 0x02143770
class Object91 : public StageEntity {
public:
	void _27();
	void _30();
	void _25();
	static void *create();
	inline Object91() {};
	inline ~Object91() {};
	u8 _pad0[0x108];
};

extern ActorProfile Object91_Profile;

