#include <stdio.h>

/**
 * swap_int - swap the value of two integers
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
	/* the function that swaps the values of two intergers. */
{
	int temp = *a;
*a = *b;
*b = temp;
}
