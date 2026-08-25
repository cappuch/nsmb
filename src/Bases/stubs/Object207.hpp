#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"

// MainProfileTable slot 207  |  ov091  |  profile @ 0x0217e334
class Object207 : public StageEntity {
public:
	static void *create();
	inline Object207();
	inline ~Object207() {};
	u8 _pT[0xe88];
};

inline Object207::Object207() {
	/* none */
}

extern ActorProfile Object207_Profile;

