#include "holberton.h"

/**
 * print_number - Function prints an integer
 * @n: The number to print
 *
 */
void print_number(int n)
{
	if (n == -2147483648)
	{
		_putchar('-');
		n /= 10;
		print_number(214748364);
		_putchar('8');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
