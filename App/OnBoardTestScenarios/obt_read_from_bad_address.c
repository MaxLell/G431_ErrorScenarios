/*
 * obt_read_from_bad_address.c
 *
 *  Created on: Apr 18, 2025
 *      Author: max
 */
#include "Types.h"

u32 read_from_bad_address(void) {
  return *(volatile u32 *)0x0BADCAFE;
}

void ec_read_from_bad_address(void) {
    u32 tmp_value = read_from_bad_address();
    (void)tmp_value;
}

