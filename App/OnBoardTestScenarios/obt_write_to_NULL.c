/*
 * obt_write_to_NULL.c
 *
 *  Created on: Apr 17, 2025
 *      Author: max
 */

#include "Types.h"

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuninitialized"


// uninitalized global ends up initialized to 0
int* global_ptr_to_null = NULL;
int* global_ptr_unitialized;


int work_with_uninitialized_ptrs(void) {
  int* ptr_to_null = NULL;
  int* ptr_unitialized;

  *global_ptr_to_null = 10;     /* tries to write to address zero */
  *global_ptr_unitialized = 10; /* tries to write to address zero */
  *ptr_to_null = 10;            /* tries to write to address zero */
  *ptr_unitialized = 10;        /* tries to write ?? somewhere ?? */

  return *global_ptr_to_null + *global_ptr_unitialized + *ptr_to_null +
         *ptr_unitialized;
}

static u32 execution_counter = 0;
void ec_work_with_unitialized_ptrs(void) {
  execution_counter++;
  int tmp = work_with_uninitialized_ptrs();
  (void)tmp;
}

#pragma GCC diagnostic pop
