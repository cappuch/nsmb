#include "layout.hpp"

namespace Layout {

#pragma section autobss_3 begin
	const BNBL* bnbl[2];
	const BNCL* bncl[2];
	const BNCD* bncd[2];
	u16 subBgColor;
#pragma section autobss_3 end

	void initSub(void* bncd, void* bncl, void* bnbl) {

		Layout::bncd[1] = (const BNCD*)bncd;
		Layout::bncl[1] = (const BNCL*)bncl;
		Layout::bnbl[1] = (const BNBL*)bnbl;

	}

	void getCellPosMain(Vec2_32& pos, u32 cellIdx) {

		s16* out = (s16*)&pos;
		const BNCL_Cell& cell = bncl[0]->cells[cellIdx];

		out[0] = cell.posX;
		out[1] = cell.posY;

	}

}