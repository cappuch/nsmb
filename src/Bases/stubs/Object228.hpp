#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
#include "../../graphics/3d/model.hpp"
extern "C" void func_0201be64(void *);

// MainProfileTable slot 228  |  ov088  |  profile @ 0x02182050
class Object228 : public StageEntity {
public:
	void pendingDestroy();
	static void *create();
	inline Object228();
	inline ~Object228() {};
	Model _m0;
	u8 _pT[0x78];
};

inline Object228::Object228() {
	/* none */
	func_0201be64((char *)this + 0x484);
}

extern ActorProfile Object228_Profile;

