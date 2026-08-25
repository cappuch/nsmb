#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
#include "../../Collision/Collider.hpp"

// MainProfileTable slot 188  |  ov097  |  profile @ 0x02188970
class Object188 : public StageEntity {
public:
	static void *create();
	inline Object188();
	inline ~Object188() {};
	u8 _p0[0x3c];
	Collider _m1;
	u8 _pT[0xb0];
};

inline Object188::Object188() {
	/* none */
}

extern ActorProfile Object188_Profile;

