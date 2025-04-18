/*
 * obt_stacking_exception_error.c
 *
 *  Created on: Apr 18, 2025
 *      Author: max
 */
#include "Types.h"

void stkerr_from_psp(void) {
  u32 dummy_variable;
  u32* ptr_dummy_variable = &dummy_variable;
  volatile u32* ptr_start_of_ram = (volatile u32*)0x2000000;

  const u32 distance_to_ram_bottom = ptr_dummy_variable - ptr_start_of_ram;
  volatile u8 big_buffer[distance_to_ram_bottom - 8];

  // Fill the ram with some numbers
  for (u32 i = 0; i < sizeof(big_buffer); i++) {
    big_buffer[i] = i;
  }
}

void ec_stacking_exception_error(void) { stkerr_from_psp(); }
