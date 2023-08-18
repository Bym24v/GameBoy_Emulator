#include "GameBoy.hpp"

GameBoy::GameBoy()
{

}

GameBoy::~GameBoy()
{

}


void GameBoy::PowerUp(const String bootable_room, const String cartridge)
{
	std::cout << "+ -------------------------------------- +\n";
	std::cout << "|    ..:: Emulator GameBoy v1 ::..       |\n";
	std::cout << "|    + -:: Developer @Bym24v ::- +       |\n";
	std::cout << "+ -------------------------------------- +\n";

	/// TODO Next secuence
	if (gb_mmu.LoadRoms(bootable_room, cartridge))
	{
		std::cout << "Load Finnish!\n";
	}
}


