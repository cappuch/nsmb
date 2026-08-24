#include "MGScene.hpp"

extern u8 data_0208b178;
extern u32 data_02139700;
extern "C" void func_02122ba8(u32*);

#pragma thumb on

MGScene::MGScene()
{
	this->skipFlags |= 1;
	this->skipFlags |= 4;
}

bool MGScene::preCreate()
{
	return true;
}

void MGScene::postCreate(u32)
{
}

bool MGScene::preDestroy()
{
	if (!Base::preDestroy()) {
		return false;
	}
	if (data_0208b178) {
		func_02122ba8(&data_02139700);
	}
	return true;
}
void MGScene::postDestroy(u32)
{
}
bool MGScene::preUpdate()
{
}
void MGScene::postUpdate(u32)
{
}
bool MGScene::preRender()
{
}
void MGScene::postRender(u32)
{
}

#pragma thumb off
