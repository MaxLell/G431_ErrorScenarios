/************************************************************
 * Includes
 ************************************************************/
#include "OnBoardTest.h"

#include <obt_tests.h>

#include "Common.h"
#include "OnBoardTest_TestDeclaration.h"

/************************************************************
 * private variables
 ************************************************************/

static OnBoardTest_Test_e eCurrentTest =
    E_TEST_ERROR_WORK_WITH_UNINITIALIZED_PTRS;

/**
 * Init Function Array
 */
static const test_function_ptr initFunctionLUT[E_TEST_LAST_ENTRY] = {
    [E_TEST_ERROR_NULL_PTR_ARG] = ec_nullptr_arg,
    [E_TEST_ERROR_DIVIDE_BY_ZERO] = ec_divide_by_zero,
    [E_TEST_ERROR_WORK_WITH_UNINITIALIZED_PTRS] = ec_work_with_unitialized_ptrs,
    [E_TEST_ERROR_ILLEGAL_INSTRUCTION_EXECUTION] =
        ec_illegal_instruction_execution,
    [E_TEST_ERROR_ILLEGAL_ADDRESS_EXECUTION] = ec_illegal_address_execution,
    [E_TEST_ERROR_NULL_PTR_FUNCTION_EXECUTION] = ec_null_ptr_execution,
    [E_TEST_ERROR_READ_FROM_BAD_ADDRESS] = ec_read_from_bad_address,
    [E_TEST_ERROR_IMPRECISE_FAULT] = ec_imprecise_fault,
    [E_TEST_ERROR_STACKING_EXCEPTION_ERROR] = ec_stacking_exception_error,
    [E_TEST_ERROR_WRITE_TO_INVALID_ROM_ADDRESS] =
        ec_write_to_invalid_rom_address,
    [E_TEST_ERROR_TRIGGER_STACK_OVERFLOW] = ec_trigger_stack_overflow,
    [E_TEST_EXERCISE_1] = obt_exercise_1,
};

/**
 * loop Function Array
 */
static const test_function_ptr runFunctionLUT[E_TEST_LAST_ENTRY] = {
    [E_TEST_ERROR_NULL_PTR_ARG] = ec_nullptr_arg,
    [E_TEST_ERROR_DIVIDE_BY_ZERO] = dummy_run,
    [E_TEST_ERROR_WORK_WITH_UNINITIALIZED_PTRS] = ec_work_with_unitialized_ptrs,
    [E_TEST_ERROR_ILLEGAL_INSTRUCTION_EXECUTION] = dummy_run,
    [E_TEST_ERROR_ILLEGAL_ADDRESS_EXECUTION] = dummy_run,
    [E_TEST_ERROR_NULL_PTR_FUNCTION_EXECUTION] = dummy_run,
    [E_TEST_ERROR_READ_FROM_BAD_ADDRESS] = dummy_run,
    [E_TEST_ERROR_IMPRECISE_FAULT] = dummy_run,
    [E_TEST_ERROR_STACKING_EXCEPTION_ERROR] = dummy_run,
    [E_TEST_ERROR_WRITE_TO_INVALID_ROM_ADDRESS] = dummy_run,
    [E_TEST_ERROR_TRIGGER_STACK_OVERFLOW] = dummy_run,
    [E_TEST_EXERCISE_1] = dummy_run,
};

/************************************************************
 * Implementation
 ************************************************************/

void OnBoardTest_init(void) {
  {  // Input Check
    ASSERT_MSG(eCurrentTest < E_TEST_LAST_ENTRY,
               "Invalid Test - Test is out of bounds");
  }

  // Run the Init function of the current test
  void (*test_function)(void) = initFunctionLUT[eCurrentTest];
  ASSERT(NULL != test_function);
  test_function();
}

void OnBoardTest_loop(void) {
  {  // Input Check
    ASSERT_MSG(eCurrentTest < E_TEST_LAST_ENTRY,
               "Invalid Test - Test is out of bounds");
  }
  runFunctionLUT[eCurrentTest]();
}
