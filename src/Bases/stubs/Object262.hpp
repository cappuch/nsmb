#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
#include "../../Collision/Collider.hpp"

// MainProfileTable slot 262  |  ov042  |  profile @ 0x02152238
class Object262 : public StageEntity {
public:
	void pendingDestroy();
	static void *create();
	inline Object262();
	inline ~Object262() {};
	Collider _m0;
	u8 _pT[0x2c8];
};

inline Object262::Object262() {
	/* none */
}

extern ActorProfile Object262_Profile;

