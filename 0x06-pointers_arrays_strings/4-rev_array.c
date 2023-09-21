#include "main.h"

/**
 * reverse_array - reverses content of an array of the integers
 * @a: The array of the integers
 * @n: The number of elements in array
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
