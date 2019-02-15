#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * Return: exit value
 */
int main(void)
{
	long num = 612852475143;
	int big = 0;
	int i;

	for (i = 3; i <= sqrt(num); i++)
	{
		while (num % i == 0)
		{
			big = i;
			num = num / i;
		}
	}
	printf("%d\n", big);
	return (0);
}
