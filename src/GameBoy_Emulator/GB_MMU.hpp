#pragma once
#ifndef __MMU_H__
#define __MMU_H__

#include "GB_Base.hpp"

struct GB_MMU
{
	GB_MMU();
	~GB_MMU();

	bool LoadRoms(const String, const String);

private:

	// Memory
	u8 RAM[r8Kb]{0};
	u8 VRAM[r8Kb]{0};

	// BOOT 
	u8 BootableROM[r256]{0};
	u8* ROM{nullptr};


	bool LoadBootableRoom(const String);
	bool LoadCartridge(const String);

};

#endif // __MMU_H__