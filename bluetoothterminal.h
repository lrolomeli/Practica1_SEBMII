/*
 * bluetooth.h
 *
 *  Created on: Mar 28, 2018
 *      Author: lrolo
 */

#ifndef BLUETOOTHTERMINAL_H_
#define BLUETOOTHTERMINAL_H_

#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"
#include "event_groups.h"
QueueHandle_t get_bt_msg_queue(void);
QueueHandle_t get_bt_time_queue(void);
void bt_terminal_init(void);

#endif /* BLUETOOTHTERMINAL_H_ */
