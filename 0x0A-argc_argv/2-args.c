#include "main.h"
#include <stdio.h>

/**
 * main	-	prints all the args content
 * argc:	prints all the argc content
 * @argv: argument vector
 *
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
