#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
#include "../../graphics/3d/model.hpp"

// MainProfileTable slot 121  |  ov054  |  profile @ 0x02170130
class Object121 : public StageEntity {
public:
	static void *create();
	inline Object121();
	inline ~Object121() {};
	Model _m0;
	u8 _pT[0x8f0];
};

inline Object121::Object121() {
	/* none */
}

extern ActorProfile Object121_Profile;

