#include"main.h"

/**
 * main - print numbers 1 - 100 and should be followed new line
 *       numbers which are multiples of 3 print Fizz
 *       numbers which are multiples of 5 print Buzz
 *       numbers which are multiples of 3 n 5 print FizzBuzz
 *       each number which  word to be separated by space
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; ++num)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);

		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
