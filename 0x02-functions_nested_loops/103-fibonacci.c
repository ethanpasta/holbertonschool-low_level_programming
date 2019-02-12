#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n1 = 1, n2 = 2, tmp, i;
	long sum = 0;

	for (i = 0; i < 15; i++)
	{
		if (n1 % 2 == 0)
			sum += n1;
		if (n2 % 2 == 0)
			sum += n2;
		tmp = n1 + n2;
		n1 = tmp;
		n2 = tmp + n2;
	}
	printf("%lu\n", sum);
	return (0);
}
