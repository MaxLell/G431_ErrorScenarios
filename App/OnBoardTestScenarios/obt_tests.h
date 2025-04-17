/*
 * obt_tests.h
 *
 *  Created on: Apr 17, 2025
 *      Author: max
 */

#ifndef ONBOARDTESTSCENARIOS_OBT_TESTS_H_
#define ONBOARDTESTSCENARIOS_OBT_TESTS_H_

void dummy_run(void);

void ec_nullptr_arg(void);
void ec_divide_by_zero(void);
void ec_write_to_null(void);
void ec_illegal_instruction_execution(void);
void ec_illegal_address_execution(void);

#endif /* ONBOARDTESTSCENARIOS_OBT_TESTS_H_ */
