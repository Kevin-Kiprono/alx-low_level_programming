/*
 * 0x05. C - Pointers, arrays, and strings
 * Task 0. 98 Battery St.
 * Purpose: Update the value of a pointer.
 */

#include "main.h"

/**
 * reset_to_98 - Updates the value of the integer pointer
 * @n: Pointer to an integer
 *
 * Description: This function takes a pointer to an integer and updates the
 * value it points to with 98.
 */
void reset_to_98(int *n)
{
	*n = 98;
}
