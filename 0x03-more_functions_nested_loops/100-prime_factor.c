#include <stdio.h>
#include <math.h>
/**
 * prime - Function checks if a number is prime
 * @num: Number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int prime(int num)
{
	double root = sqrt((double)num);
	int check = 1, i;

	for (i = 2; i < root; i++)
		if (num % i == 0)
			check = 0;
	return (check);
}

/**
 * main - entry point
 * Return: exit value
 */
int main(void)
{
	long num = 612852475143;
	double root = sqrt((double)num);
	int big = 0;
	int i;

	root = (int)root;
	for (i = 2; i <= root; i++)
		if ((num % i == 0) && prime(i))
			if (i > big)
				big = i;
	printf("%d\n", big);
	return (0);
}
