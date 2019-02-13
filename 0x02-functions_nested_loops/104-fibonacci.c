#include <stdio.h>

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
	n11 = a / 1000000000;
	n12 = a % 1000000000;
	n21 = b / 1000000000;
	n22 = b % 1000000000;
	for (i = 1; i <= 7; i++)
	{
		sum1 = n11 + n21;
		sum2 = n12 + n22;
		printf(", %lu%lu", sum1, sum2);
		n11 = n21;
		n12 = n22;
		n21 = sum1;
		n22 = sum2;
	}
	putchar('\n');
	return (0);
}
