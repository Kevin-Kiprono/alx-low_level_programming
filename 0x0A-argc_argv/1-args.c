#include "main.h"
#include <stdio.h>

/**
 * main	-	prints the the number to argv
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
