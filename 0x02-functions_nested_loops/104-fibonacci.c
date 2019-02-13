#include <stdio.h>

/**
 * main - entry point
 *
 * Return: exit of main function
 */
int main(void)
{
	int i;
	long a = 1, b = 2, c;
	long n11, n12, n21, n22, sum1, sum2;
	long split = 1000000000;

	printf("%lu, %lu", a, b);
	for (i = 0; i < 88; i++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}
	n11 = a / split;
	n12 = a % split;
	n21 = b / split;
	n22 = b % split;
	for (i = 1; i <= 7; i++)
	{
		sum1 = n11 + n21 + ((n12 + n22) / split);
		sum2 = (n12 + n22) % split;
		printf(", %lu%lu", sum1, sum2);
		n11 = n21;
		n12 = n22;
		n21 = sum1;
		n22 = sum2;
	}
	putchar('\n');
	return (0);
}
