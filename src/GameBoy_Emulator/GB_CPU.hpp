#pragma once
#ifndef __CPU_H__
#define __CPU_H__

#include "GB_Base.hpp"
#include "GB_MMU.hpp"

struct GB_CPU
{
	GB_CPU();
	~GB_CPU();

	

private:
	GB_MMU* gb_mmu;

	u8	RegA	{ 0 };
	u8	RegB	{ 0 };
	u8	RegC	{ 0 };
	u8	RegD	{ 0 };
	u8	RegE	{ 0 };
	u8	RegH	{ 0 };
	u8	RegL	{ 0 };
	u16 RegSP	{ 0 };
	u16 RegPC	{ 0 };

	bool FlagZ	{ false };
	bool FlagN	{ false };
	bool FlagH	{ false };
	bool FlagC	{ false };
};

#endif // __CPU_H__