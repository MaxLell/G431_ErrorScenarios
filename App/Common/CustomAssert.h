#ifndef CUSTOM_ASSERT_H
#define CUSTOM_ASSERT_H

#include "Common.h"

#define ASSERT_MSG(x, msg, ...)                                                                  \
    if ((x))                                                                                     \
    {                                                                                            \
    }                                                                                            \
    else                                                                                         \
    {                                                                                            \
        printf("[ASSERT FAIL] (%s:%d): (%s): " msg "\n", __FILE__, __LINE__, #x, ##__VA_ARGS__); \
        __asm("bkpt 1");                                                                         \
        while (1)                                                                                \
        {                                                                                        \
        }                                                                                        \
    }                                                                                            \
    while (0)

#define ASSERT(x, ...)                                                                    \
    if ((x))                                                                              \
    {                                                                                     \
    }                                                                                     \
    else                                                                                  \
    {                                                                                     \
        printf("[ASSERT FAIL] (%s:%d): (%s): \n", __FILE__, __LINE__, #x, ##__VA_ARGS__); \
        __asm("bkpt 1");                                                                  \
        while (1)                                                                         \
        {                                                                                 \
        }                                                                                 \
    }                                                                                     \
    while (0)

#define TEST_ASSERT(x, ...) \
    if ((x))                \
    {                       \
    }                       \
    else                    \
    {                       \
        __asm("bkpt 1");    \
    }                       \
    while (0)

/**
 * Taken from
 * https://stackoverflow.com/questions/4851075/universally-compiler-independent-way-of-implementing-an-unused-macro-in-c-c
 */
#ifndef unused
#define unused(X) ((void)(0)) // To avoid compiler warnings
#endif                        // UNUSED

#endif // CUSTOM_ASSERT_H
