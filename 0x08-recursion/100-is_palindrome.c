#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 *  * is_palindrome - if  string is a palindrome it checks.
 *   * @s:  reverse the tring.
 *    * Return: 1 if it is, otherwise 0
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 *  * _strlen_recursion - takes back the length of a string
 *   * @s:  the length of string to be calculated
 *    * Return: length of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
 *  * check_pal - looks for  the char recursively for palindrome
 *   * @s: string to be checked
 *    * @i: iterator
 *     * @len: length of the string
 *      * Return: 1 if palindrome, otherwise 0
 */
int check_pal(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
return (0);
if (i >= len)
return (1);
return (check_pal(s, i + 1, len - 1));
}
