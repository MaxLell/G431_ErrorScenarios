/*
 * obt_imprecise_fault.c
 *
 *  Created on: Apr 18, 2025
 *      Author: max
 */

#include "Types.h"

void bad_address_double_word_write(void) {
  volatile u64 *buf = (volatile u64 *)0x30000000;
  *buf = 0x1122334455667788;
}

void ec_imprecise_fault(void)
{
  bad_address_double_word_write();
}