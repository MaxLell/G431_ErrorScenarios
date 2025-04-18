/**
 * @file obt_stack_overflow.c
 * @brief Stack overflow test case
 * 
 * This test case is designed to simulate a stack overflow condition
 * by recursively calling a function until the stack limit is reached.
 * 
 */
#include "Types.h"

// Disable the infinite recursion warning (which is expected in this case)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Winfinite-recursion"

// Define a function that calls itself recursively
// There is no base case, so it will continue to call itself
static void recursive_function(void) {
    recursive_function();
}

void ec_trigger_stack_overflow(void) {
    recursive_function();
}

// Enable the infinite recursion warning again
#pragma GCC diagnostic pop

