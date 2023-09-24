#include "main.h"
#include <string.h>

/**
 * print_rev - Prints a string in reverse order
 * @str: The input string
 *
 * Return: void
 */
void print_rev(char *str)
{
	int i;

	if (str == NULL)
		return;

	for (i = strlen(str) - 1; i >= 0; i--)
		putchar(str[i]);

	putchar('\n');
}
