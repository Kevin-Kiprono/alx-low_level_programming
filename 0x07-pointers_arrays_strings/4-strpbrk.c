#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - search a string for any set of bytes.
 * @s: string to search.
 * @accept: string to use.
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	for (; s[i] != '\0' && _strchr(accept, s[i]) == NULL; i++)
		;

	if (s[i] == '\0')
		return (NULL);
	else
		return (s + i);
}

/**
 * _strchr - locates a char in string.
 * @s: string to search.
 * @c: char to check.
 *
 * Return: pointer to the first occurence of c in s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != c && s[i] != '\0'; i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
