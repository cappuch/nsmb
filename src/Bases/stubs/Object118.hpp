#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"

// MainProfileTable slot 118  |  ov080  |  profile @ 0x0217d968
class Object118 : public StageEntity {
public:
	static void *create();
	inline Object118() {};
	inline ~Object118() {};
	u8 _pad0[0xe8];
};

extern ActorProfile Object118_Profile;

