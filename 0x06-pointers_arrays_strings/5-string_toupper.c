#include "main.h"

/**
 * string_toupper - converts lowercase letters of the string to uppercase
 * @str: The string to be converted
 *
 * Return: Pointer to the resulting of the string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}

	return (str);
}
