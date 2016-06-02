/*
*   exceptions.h
*       by TuxSH
*/

#pragma once

#include "types.h"

void installArm9Handlers(void);
void installArm11Handlers(u32 *exceptionsPage, u32 stackAddr);
void detectAndProcessExceptionDumps(void);