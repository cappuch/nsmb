#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"

// MainProfileTable slot 90  |  ov027  |  profile @ 0x0213cd18
class Object90 : public StageEntity {
public:
	static void *create();
	inline Object90();
	inline ~Object90() {};
	u8 _pT[0x160];
};

inline Object90::Object90() {
	/* none */
}

extern ActorProfile Object90_Profile;

