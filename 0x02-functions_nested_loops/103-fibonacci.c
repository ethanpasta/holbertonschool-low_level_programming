#include <stdio.h>
#include "holberton.h"

/**
 * main - entry point
 *
 * Return: exit of the main program
 */
int main(void)
{
	int i;
	long a = 1, b = 2, c;
	long sum = 2;

	for (i = 0; i < 28; i++)
	{
		c = a + b;
		if ((c % 2) == 0)
			sum += c;
		a = b;
		b = c;
	}
	printf("%lu\n", sum);
	return (0);
}
