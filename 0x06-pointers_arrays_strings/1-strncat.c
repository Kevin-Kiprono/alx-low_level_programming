#include "main.h"

/**
 * _strncat - concatenates the two strings
 * @dest: The destination also a string
 * @src: The source string is to append
 * @n: The maximum number of bytes that use from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	/* Find the end of the destination string */
	while (*dest_ptr)
		dest_ptr++;

	/* Copy up to n bytes from src to dest */
	while (*src && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}

	/* Add terminating null byte */
	*dest_ptr = '\0';

	return (dest);
}
