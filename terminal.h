#ifndef TERMINAL_H_
#define TERMINAL_H_
#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"
#include "event_groups.h"

/*******************************************************************************
 * Prototypes
 ******************************************************************************/
void terminal_init(void);

#endif /* TERMINAL_H_ */