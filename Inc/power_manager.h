/**
 *******************************************************************************
 *******************************************************************************
 *
 * @file	power_manager.h
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
 
#ifndef __POWER_MANAGER_H
#define __POWER_MANAGER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "stdint.h"

#define TEN_MILLISECONDS 			10
#define ONE_SECOND 					1000
#define ONE_MINUTE 					ONE_SECOND*60
#define HEARTBEAT_CHECK_INTERVAL 	ONE_SECOND*5

#define ZYNQ_STATE_UNKNOWN	0
#define ZYNQ_OFF			1
#define ZYNQ_ON				2

extern volatile uint32_t SleepTimer;
extern volatile uint32_t HeartbeatTimer;

extern volatile uint32_t WakeupEnabled;

extern volatile uint32_t DoCommand;
extern volatile uint32_t Command;
extern volatile uint32_t Parameter;

extern uint32_t PacketIndex;
extern uint32_t ZynqState;

uint32_t HexTextToBinary(uint32_t input);

#ifdef __cplusplus
}
#endif
#else
#error "Multiple inclusion of power_manager.h"
#endif /* __POWER_MANAGER_H */

/*
 * END OF FILE [power_manager.h]
 */
