#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len;
	char temp;

	if (s == NULL)
		return;

	/* Find the length of the string */
	for (len = 0; s[len] != '\0'; len++)
		;

	/* Swap characters from start and end */
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}

	/* Print the reversed string */
	for (i = 0; i < len; i++)
		putchar(s[i]);
	putchar('\n');
}
