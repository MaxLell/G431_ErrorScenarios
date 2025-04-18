/*
 * obt_illegal_instruction_execution.c
 *
 *  Created on: Apr 17, 2025
 *      Author: max
 */
#include "Types.h"

void ec_illegal_instruction_execution(void) {
  // invalid instruction
  u32 instruction = 0xE0000000;

  // Wrap into a function pointer
  int (*bad_instruction_fn)(void) = (int (*)())(&instruction);

  // Run this funciton
  bad_instruction_fn();
}
