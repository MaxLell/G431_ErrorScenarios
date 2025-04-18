#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

#include "Types.h"

/**
 * @brief function that writes out of bounds of an array.
 * This function trashes the stack. It overwrites the stack of the function
 * which called this function. 
 * In this case this triggers a HardFault, which is very hard to locate.
 */
void obt_test_error_array_out_of_bounds(void) {
    int arr[5] = {0};
    for (int i = 0; i < 10; i++) {
        arr[i] = i; // Out of bounds access
    }
}

// Tests integer overflow by exceeding the maximum value of an int.
void obt_test_error_integer_overflow(void) {
    int max = INT32_MAX;
    int result = max + 1; // Undefined Behaviour
    (void)result; // Suppress unused variable warning
}

/**
 * @brief function that uses an uninitialized variable.
 * This function uses an uninitialized variable. This does NOT trigger a fault
 * in the system. This is a very hard to locate bug, because the variable can change
 * its value at any time.
 */
void obt_test_error_uninitialized_variable(void) {
    s32 x;
    printf("%d\n", x); // Undefined Behaviour
}

/**
 * @brief function that uses an invalid pointer cast.
 * This function uses an invalid pointer cast. This does NOT trigger a fault
 */
void obt_test_error_invalid_pointer_cast(void) {
    s32 x = 42;
    u8 *ptr = (u8 *)&x;
    *ptr = 'A'; // May cause Undefined Behaviour
}

/**
 * @brief function that uses a double free.
 * This function uses a double free. This does NOT trigger a fault
 */
void obt_test_error_double_free(void) {
    int *ptr = malloc(100   );
    free(ptr);
    free(ptr); // Undefined Behaviour
}

/**
 * @brief Tests division by zero.
 * This function attempts to divide an integer by zero, which is undefined behavior
 * in C. This may cause a crash or unpredictable results.
 */
void obt_test_error_division_by_zero(void) {
    int32_t a = 42;
    int32_t b = 0;
    int32_t result = a / b; // Undefined Behavior: Division by zero
    (void)result; // Suppress unused variable warning
}

/**
 * @brief Tests modifying a string literal.
 * This function attempts to modify a string literal, which is stored in read-only
 * memory. This is undefined behavior and may cause a crash or memory corruption.
 */
void obt_test_error_modify_string_literal(void) {
    char *str = "hello";
    str[0] = 'H'; // Undefined Behavior: Modifying a string literal
    printf("%s\n", str); // Result is unpredictable
}

/**
 * @brief Tests dereferencing a dangling pointer.
 * This function returns a pointer to a local variable and dereferences it after
 * the variable's lifetime has ended, causing undefined behavior.
 */
void obt_test_error_dangling_pointer(void) {
    int32_t *ptr;
    {
        int32_t x = 100;
        ptr = &x; // Pointer to local variable
    } // x goes out of scope here
    printf("Value: %d\n", *ptr); // Undefined Behavior: Dereferencing dangling pointer
}

/**
 * @brief Tests shifting an integer beyond its bit width.
 * This function shifts a 32-bit integer by 32 or more bits, which is undefined
 * behavior in C. The result is unpredictable.
 */
void obt_test_error_invalid_shift(void) {
    int32_t x = 1;
    int32_t shift = 32; // Assuming 32-bit int
    int32_t result = x << shift; // Undefined Behavior: Shifting by >= bit width
    printf("Result: %d\n", result); // Result is unpredictable
}

/**
 * @brief Tests a sequence point violation.
 * This function modifies a variable multiple times between sequence points,
 * causing undefined behavior due to ambiguous evaluation order.
 */
void obt_test_error_sequence_point_violation(void) {
    int32_t i = 5;
    i = i++ + ++i; // Undefined Behavior: Multiple modifications without sequence point
    printf("i: %d\n", i); // Result is unpredictable
}