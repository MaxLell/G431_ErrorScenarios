/*
 * obt_write_to_rom.c
 *
 *  Created on: Apr 18, 2025
 *      Author: max
 */

#include "Types.h"

void ec_write_to_invalid_rom_address(void){
	*((int*)0x0) = 10; /* tries to write to address zero */
}
