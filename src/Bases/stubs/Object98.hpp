#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"

// MainProfileTable slot 98  |  ov023  |  profile @ 0x0213ebf0
class Object98 : public StageEntity {
public:
	static void *create();
	inline Object98();
	inline ~Object98() {};
	u8 _pT[0xcbc];
};

inline Object98::Object98() {
	/* none */
}

extern ActorProfile Object98_Profile;

