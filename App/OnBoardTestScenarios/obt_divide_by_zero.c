/*
 * obt_divide_by_zero.c
 *
 *  Created on: Apr 17, 2025
 *      Author: max
 */
#include "Types.h"

// #################################################################################
// Devide by zero
// #################################################################################

void ec_divide_by_zero(void) {
	u32 a = 100;
	u32 b = 0;
	u32 c = a / b;
	(void)c;
}

