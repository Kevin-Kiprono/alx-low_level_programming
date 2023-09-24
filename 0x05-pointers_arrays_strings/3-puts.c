#include "stdio.h"

/**
 * _puts - prints string followed by a new line
 *
 * Returns void
 */
void _puts(const char *str)
{
	for (; *str != '\0'; str++)
	{
	putchar(*str);
	}
	putchar('\n');
}
