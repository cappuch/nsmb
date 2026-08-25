#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"

// MainProfileTable slot 97  |  ov017  |  profile @ 0x02133d08
class Object97 : public StageEntity {
public:
	s32 onRender();
	void pendingDestroy();
	s32 onDestroy();
	static void *create();
	inline Object97();
	inline ~Object97() {};
	u8 _pT[0x6c];
};

inline Object97::Object97() {
	/* none */
}

extern ActorProfile Object97_Profile;

