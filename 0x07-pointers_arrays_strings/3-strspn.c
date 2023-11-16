#include <stdio.h>
#include "main.h"

/**
 * _strspn - get the length of prefix substring.
 * @s: strings to be searched.
 * @accept: strings to be use.
 *
 * Return: number of bytes in the initial segment of s which are part of accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int match = 0;

	while (s[i] != '\0')
	{
		if (_strchr(accept, s[i]) == NULL)
			break;
		match++;
		i++;
	}

	return (match);
}

/**
 * _strchr - locates a char in a string
 * @s: string to be searched
 * @c: char to be checked
 *
 * Return: pointer to the first occurence of c in s
 */

char *_strchr(char *s, char c)
{
	 int i = 0;

    for (; s[i] != c && s[i] != '\0'; i++)
    {
        for (; s[i] != c && s[i] != '\0'; i++)
    continue;
    }
    if (s[i] == c)
    {
        return (s + i);
    }
    else
    {
        return (NULL);
    }
}
