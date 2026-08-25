#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
#include "../../graphics/3d/model.hpp"
extern "C" void func_0201be64(void *);

// MainProfileTable slot 170  |  ov048  |  profile @ 0x02148920
class Object170 : public StageEntity {
public:
	static void *create();
	inline Object170();
	inline ~Object170() {};
	u8 _p0[0x8];
	Model _m1;
	u8 _pT[0x7c];
};

inline Object170::Object170() {
	/* none */
	func_0201be64((char *)this + 0x48c);
}

extern ActorProfile Object170_Profile;

