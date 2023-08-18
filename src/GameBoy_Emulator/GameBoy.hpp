#pragma once

#include "GB_Base.hpp"
#include "GB_MMU.hpp"
#include "GB_CPU.hpp"
#include "GB_Debugger.hpp"

struct GameBoy
{
	GameBoy();
	~GameBoy();

	void StartEmulation();

	void LoadBoot();
	void LoadCartridge();

private:

	GB_CPU gb_cpu;
	GB_MMU gb_mmu;
	GB_Debugger gb_dbg;
};