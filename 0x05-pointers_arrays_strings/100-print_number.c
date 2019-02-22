#include "holberton.h"

/**
 * print_number - Function prints an integer
 * @n: The number to print
 *
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		n1 = n;
	}
	n1 = n;
	if (n1 / 10)
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}
