/*
 * obt_illegal_address_execution.c
 *
 *  Created on: Apr 17, 2025
 *      Author: max
 */

void ec_illegal_address_execution(void) {
  // Set up an illegal address to be executed from
  int (*func_ptr)(void) = (int (*)())0x00000001;

  // run the instruction at the illegal address
  func_ptr();
}
