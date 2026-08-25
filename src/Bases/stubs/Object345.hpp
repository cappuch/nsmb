#pragma once
#include "../StageEntity.hpp"
#include "../../AAA.hpp"

// MainProfileTable slot 345  |  ov128  |  profile @ 0x020feb50
class Object345 : public StageEntity {
public:
	bool _14();
	bool onUpdate_8();
	void pendingDestroy();
	bool onUpdate_6();
	bool onUpdate_defeated();
	bool onUpdate_1();
	static void *create();
	inline Object345() {};
	inline ~Object345() {};
};

extern ObjectProfile Object345_Profile;

