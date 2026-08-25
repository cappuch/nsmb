// ov090 gap chunk: 0x0217db60-0x0217ef8c
#include "nsmb_nitro.hpp"
#include "AAA.hpp"
#include "graphics/3d/texture.hpp"

// ---- external references ----
extern "C" void func_ov010_020f5f90(void *, void *, u32, u32, u32);
extern "C" void func_ov010_020f5d70(u32, u32);
extern "C" void func_ov010_020f5d4c(void *);
extern "C" void func_ov054_02160cc4(void *, u32, void *, void *, void *, u32);
extern "C" void func_ov054_02160bd4(void *, u32, u32, u32, u32);

// veneer targets (jumped to, defined elsewhere)
extern "C" bool func_ov090_0217df50(void *o, u32 id);
extern "C" bool func_ov090_0217df5c(u32 id);

extern "C" bool FS_loadFile_thunk(u32 id, bool compressed);

extern "C" u32 data_ov090_02184bb4[];
extern "C" u32 data_ov090_02184bc0[];

// ---- forward decls within chunk ----
extern "C" void func_ov090_0217dda4(void *o, s32 v);
extern "C" void func_ov090_0217e36c(void *o, s32 v);
extern "C" void func_ov090_0217ebf4(void *o, s32 v);
extern "C" void func_ov090_0217e6ac(void *o, s32 v);
extern "C" void func_ov090_0217e6b8(void *o, s32 v);
extern "C" bool func_ov090_0217dea4(void *o, u16 idx);

// ---- simple halfword setters ----
extern "C" void func_ov090_0217e6ac(void *o, s32 v)
{
	*(s16 *)((char *)o + 0x12) = v >> 6;
}

extern "C" void func_ov090_0217e6b8(void *o, s32 v)
{
	*(s16 *)((char *)o + 0x10) = v >> 6;
}

extern "C" void func_ov090_0217dda4(void *o, s32 v)
{
	s32 t = v + 0xc000;
	*(s16 *)((char *)o + 0x10) = t >> 6;
	*(s16 *)((char *)o + 0x12) = (v - 0xc000) >> 6;
}

extern "C" void func_ov090_0217e36c(void *o, s32 v)
{
	s32 t = v + 0xc000;
	*(s16 *)((char *)o + 0x10) = t >> 6;
	*(s16 *)((char *)o + 0x12) = (v - 0xc000) >> 6;
}

extern "C" void func_ov090_0217ebf4(void *o, s32 v)
{
	s32 t = v + 0x11000;
	*(s16 *)((char *)o + 0x10) = t >> 6;
	*(s16 *)((char *)o + 0x12) = (v - 0x7000) >> 6;
}

// ---- texture loaders ----
extern "C" bool func_ov090_0217e388(Texture *t)
{
	return t->load(FS::Cache::getFile(0x535));
}

extern "C" bool func_ov090_0217e6c4(Texture *t)
{
	return t->load(FS::Cache::getFile(0x537));
}

extern "C" bool func_ov090_0217e890(Texture *t)
{
	return t->load(FS::Cache::getFile(0x534));
}

extern "C" bool func_ov090_0217ee04(Texture *t)
{
	return t->load(FS::Cache::getFile(0x540));
}

extern "C" bool func_ov090_0217ddc0(Texture *t, u32 idx)
{
	return t->load(FS::Cache::getFile(data_ov090_02184bb4[idx]));
}

extern "C" bool func_ov090_0217ec10(Texture *t, u32 idx)
{
	return t->load(FS::Cache::getFile(data_ov090_02184bc0[idx]));
}

extern "C" void func_ov090_0217ec44()
{
	FS::Cache::loadFile(0x536, false);
	FS::Cache::loadFile(0x532, false);
}

// ---- guarded chains ----
extern "C" bool func_ov090_0217e3d0(void *o);
extern "C" bool func_ov090_0217e70c(void *o);
extern "C" bool func_ov090_0217e8d8(void *o);
extern "C" void func_ov090_0217ee30();

extern "C" bool func_ov090_0217e4b4(Texture *t)
{
	if (!func_ov090_0217e388(t))
		return false;
	return func_ov090_0217e3d0((char *)t + 0x14);
}

extern "C" bool func_ov090_0217e854(Texture *t)
{
	if (!func_ov090_0217e6c4(t))
		return false;
	return func_ov090_0217e70c((char *)t + 0x14);
}

extern "C" bool func_ov090_0217e9c0(Texture *t)
{
	if (!func_ov090_0217e890(t))
		return false;
	return func_ov090_0217e8d8((char *)t + 0x18);
}

extern "C" void func_ov090_0217ef74()
{
	func_ov090_0217ec44();
	func_ov090_0217ee30();
}
