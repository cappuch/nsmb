#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"

// MainProfileTable slot 230  |  ov088  |  profile @ 0x02181f00
class Object230 : public StageEntity {
public:
	s32 onDestroy();
	void pendingDestroy();
	static void *create();
	inline Object230();
	inline ~Object230() {};
	u8 _pT[0x178];
};

inline Object230::Object230() {
	/* none */
}

extern ActorProfile Object230_Profile;

