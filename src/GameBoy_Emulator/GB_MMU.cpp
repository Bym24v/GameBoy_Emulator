#pragma once

#include "GB_MMU.hpp"

GB_MMU::GB_MMU()
{
	
}

GB_MMU::~GB_MMU()
{
}



bool GB_MMU::LoadBootableRoom(const String room)
{
	std::cout << room << std::endl;

	return true;
}

bool GB_MMU::LoadCartridge(const String cartridge)
{
	std::cout << cartridge << std::endl;

	return true;
}

bool GB_MMU::LoadRoms(const String bootable_room, const String cartridge)
{
	if (LoadBootableRoom(bootable_room))
	{
		return LoadCartridge(cartridge);
	}

	return false;
}