/************************************************************
 * Includes
 ************************************************************/
#include <obt_tests.h>
#include "Common.h"
#include "OnBoardTest.h"
#include "OnBoardTest_TestDeclaration.h"


/************************************************************
 * private variables
 ************************************************************/

static OnBoardTest_Test_e eCurrentTest = E_TEST_ERROR_ILLEGAL_ADDRESS_EXECUTION;

/**
 * Init Function Array
 */
static const test_function_ptr initFunctionLUT[E_TEST_LAST_ENTRY] = {
    [E_TEST_ERROR_NULL_PTR_ARG] = ec_nullptr_arg,
	[E_TEST_ERROR_DIVIDE_BY_ZERO] = ec_divide_by_zero,
	[E_TEST_ERROR_WRITE_TO_NULL] = ec_write_to_null,
	[E_TEST_ERROR_ILLEGAL_INSTRUCTION_EXECUTION] = ec_illegal_instruction_execution,
	[E_TEST_ERROR_ILLEGAL_ADDRESS_EXECUTION] = ec_illegal_address_execution,
};

/**
 * loop Function Array
 */
static const test_function_ptr runFunctionLUT[E_TEST_LAST_ENTRY] = {
    [E_TEST_ERROR_NULL_PTR_ARG] = dummy_run,
	[E_TEST_ERROR_DIVIDE_BY_ZERO] = dummy_run,
	[E_TEST_ERROR_WRITE_TO_NULL] = dummy_run,
	[E_TEST_ERROR_ILLEGAL_INSTRUCTION_EXECUTION] = dummy_run,
	[E_TEST_ERROR_ILLEGAL_ADDRESS_EXECUTION] = dummy_run,
};

/************************************************************
 * Implementation
 ************************************************************/

void OnBoardTest_init(void)
{
  { // Input Check
    ASSERT_MSG(eCurrentTest < E_TEST_LAST_ENTRY,
               "Invalid Test - Test is out of bounds");
  }

  // Run the Init function of the current test
  initFunctionLUT[eCurrentTest]();
}

void OnBoardTest_loop(void)
{
  { // Input Check
    ASSERT_MSG(eCurrentTest < E_TEST_LAST_ENTRY,
               "Invalid Test - Test is out of bounds");
  }
  runFunctionLUT[eCurrentTest]();
}
