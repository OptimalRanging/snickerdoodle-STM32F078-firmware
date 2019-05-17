/**
 *******************************************************************************
 *******************************************************************************
 *
 * @file	power_manager.c
 * @author	B. Beautrow
 * @email	bruce@beautrow.com
 * @version	v1.0
 * @date	2019 May 2
 * @brief	Platform Controller Power Management Control
 * @copyright	Optimal Ranging LLC
 *
 *******************************************************************************
 *
 * Copyright (c) 2019, Optimal Ranging LLC
 * All rights reserved.
 *
 *******************************************************************************
 */
#include "power_manager.h"
 
volatile uint32_t SleepTimer;
volatile uint32_t HeartbeatTimer = ONE_MINUTE;

volatile uint32_t WakeupEnabled;

volatile uint32_t DoCommand;
volatile uint32_t Command;
volatile uint32_t Parameter;

uint32_t ZynqState = ZYNQ_STATE_UNKNOWN;
uint32_t PacketIndex;

//  Want to do this fast so nothing fancy
uint32_t HexTextToBinary(uint32_t input)
{
	switch(input)
	{
		case '1':
			return 1;
		case '2':
			return 2;
		case '3':
			return 3;
		case '4':
			return 4;
		case '5':
			return 5;
		case '6':
			return 6;
		case '7':
			return 7;
		case '8':
			return 8;
		case '9':
			return 9;
		case 'A':
			return 10;
		case 'B':
			return 11;
		case 'C':
			return 12;
		case 'D':
			return 13;
		case 'E':
			return 14;
		case 'F':
			return 15;
		case '0':
		default:
			return 0;
	}
}


