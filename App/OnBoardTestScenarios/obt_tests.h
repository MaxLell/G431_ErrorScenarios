/*
 * obt_tests.h
 *
 *  Created on: Apr 17, 2025
 *      Author: max
 * 
 * This file contains the declarations for the test functions used in the
 * OnBoardTestScenarios module. Each test function is designed to
 * simulate a specific error condition or exception that may occur
 * during the operation of the system. The test functions are used
 * to validate the system's error handling and recovery mechanisms.
 * 
 * Some of these tests are clearly faulty, however, they do not trigger 
 * a fault in the system.
 */

#ifndef ONBOARDTESTSCENARIOS_OBT_TESTS_H_
#define ONBOARDTESTSCENARIOS_OBT_TESTS_H_

/**
 * @brief Dummy function that does nothing.
 */
void dummy_run(void);

/**
 * @brief Dummy function that sets up a stack for testing.
 * This function pushes some content onto the stack.
 */
void dummy_stack_setup(void);

/**
 * @brief Test function to simulate a null pointer argument error.
 * This function attempts to dereference a null pointer. This does NOT
 * trigger a fault in the system.
 */
void ec_nullptr_arg(void);

/**
 * @brief Test function to simulate a divide by zero error.
 * This function attempts to divide a number by zero. This does
 * trigger a UsageFault in the system.
 */
void ec_divide_by_zero(void);

/**
 * @brief Test function which write to uninitialized pointers. 
 * This function works with uninitialized pointers and tries to write to them.
 * This does NOT trigger a fault in the system immediatly, but only after
 * a couple of calls. This is why this function also contains a static counter
 * variable to count the number of calls until the fault occurs.
 */
void ec_work_with_unitialized_ptrs(void);
void ec_illegal_instruction_execution(void);
void ec_illegal_address_execution(void);
void ec_null_ptr_execution(void);
void ec_read_from_bad_address(void);
void ec_imprecise_fault(void);
void ec_stacking_exception_error(void);
void ec_write_to_invalid_rom_address(void);
void ec_trigger_stack_overflow(void);

// ####################################################################################
// Exercises for debugging
// ####################################################################################

void obt_exercise_1(void);

#endif /* ONBOARDTESTSCENARIOS_OBT_TESTS_H_ */
