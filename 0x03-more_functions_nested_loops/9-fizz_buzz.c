#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: exit value
 */
int main(void)
{
	int i;

	printf("1");
	for (i = 2; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", i);
	}
	putchar('\n');
	return (0);
}
