#include <stdio.h>
#include "main.h"

/**
 *  * main - prints the name
 *   * @argc: counts the number of arguments
 *    * @argv: arguements vector
 *     *
 *      * Return: always 0
 */

int main(int argc, char *argv[])
{
printf("%s\n", *argv);
printf(" %d\n", argc);

return (0);
}
