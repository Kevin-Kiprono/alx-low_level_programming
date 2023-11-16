#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 *  * _sqrt_recursion - takes back the natural square root of a number.
 *   * @n: number of the square root to calculate from
 *    *
 *     * Return: the output of the square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}

/**
 *  * actual_sqrt_recursion - recurse the natural to be found.
 *   * square root of the number.
 *    * @n: number of the square root to be calculate from
 *     * @i: iterator.
 *      * Return: output square root
 */
int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (actual_sqrt_recursion(n, i + 1));
}
