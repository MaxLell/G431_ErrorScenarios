/*
 * obt_null_ptr_execution.c
 *
 *  Created on: Apr 17, 2025
 *      Author: max
 */

void (*function_ptr)(void);

void ec_null_ptr_execution(void) { 
	function_ptr(); 
}
