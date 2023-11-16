#include "main.h"

/**
 *  * _strlen_recursion -  the output is the length of thestring.
 *   * @s:  measure th string.
 *    *
 *     * Return: the string its length.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
			longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
