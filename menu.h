/*
 * menu.h
 *
 *  Created on: Mar 26, 2018
 *      Author: lrolo
 */

#ifndef MENU_H_
#define MENU_H_
#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"
#include "event_groups.h"



/*******************************************************************************
 * Prototypes
 ******************************************************************************/
void main_menu_task(void * pvParameters);
void menu_task1(void * pvParameters);
void in_charge(uint8_t menu);
#endif /* MENU_H_ */