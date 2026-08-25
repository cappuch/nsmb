#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"
#include "../../graphics/3d/modelanm.hpp"
extern "C" void func_ov054_02162628(void *);

// MainProfileTable slots 158, 159 share this class.
// ov054  |  vtable @ 0x0216ff70
class Object158 : public StageEntity {
public:
	static void *create();
	static void *create2();
	inline Object158();
	inline ~Object158() {};
	ModelAnm _m0;
	u8 _pT[0x80];
};

inline Object158::Object158() {
	/* none */
	func_ov054_02162628((char *)this + 0x4bc);
}

extern ActorProfile Object159_Profile;
extern ActorProfile Object158_Profile;
