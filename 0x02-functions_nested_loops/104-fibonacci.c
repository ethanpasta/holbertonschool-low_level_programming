#include <stdio.h>

/**
 * main - entry point
 *
 * Return: exit of main function
 */
int main(void)
{
	int i;
	long long a = 1, b = 2, c;
	long long n11, n12, n21, n22, sum1, sum2;
	long long split = 100000000000000000;

	printf("%lld\n%lld\n", a, b);
	n11 = a / split;
	n12 = a % split;
	n21 = b / split;
	n22 = b % split;
	for (i = 0; i <= 200; i++)
	{
		sum1 = n11 + n21 + ((n12 + n22) / split);
		sum2 = (n12 + n22) % split;
		if (sum1 != 0)
			printf("%lld%lld\n", sum1, sum2);
		else
			printf("%lld\n", sum2);
		n11 = n21;
		n12 = n22;
		n21 = sum1;
		n22 = sum2;
	}
	putchar('\n');
	return (0);
}
