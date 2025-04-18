/*
 * error_cases.c
 *
 *  Created on: Apr 17, 2025
 *      Author: max
 */

#include <obt_tests.h>

#include "Types.h"

// #################################################################################
// Null Ptr Error Case
// #################################################################################

static void _nullptr_arg_dummy_fn(u32* data) {
	*data = 42;
}

void ec_nullptr_arg(void) {
  u32* dummy_arg = NULL;
  _nullptr_arg_dummy_fn(dummy_arg);
}
