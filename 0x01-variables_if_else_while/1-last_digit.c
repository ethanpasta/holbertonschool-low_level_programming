#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	printf("Last digit of %d is %d ", n, digit);
	if (digit > 5)
		puts("and is greater than 5");
	else if (digit == 0)
		puts("and is 0");
	else
		puts("and is less than 6 and not 0");
	return (0);
}
