/*
 * obt_illegal_address_execution.c
 *
 *  Created on: Apr 17, 2025
 *      Author: max
 */

void ec_illegal_address_execution(void) {
	// Set up an illegal address to be executed from
	int (*illegal_address)(void) = (int(*)())0xE0000000;

	// run the instruction at the illegal address
	illegal_address();

}
