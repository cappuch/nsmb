#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"

// MainProfileTable slot 169  |  ov048  |  profile @ 0x021487e8
class Object169 : public StageEntity {
public:
	static void *create();
	inline Object169();
	inline ~Object169() {};
	u8 _pT[0x1b0];
};

inline Object169::Object169() {
	/* none */
}

extern ActorProfile Object169_Profile;

