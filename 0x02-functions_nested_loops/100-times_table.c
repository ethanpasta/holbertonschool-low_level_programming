#include "holberton.h"

/**
 * print_times_table - Function that prints the n times table, starting with 0.
 * @n: the times table limit
 *
 */
void print_times_table(int n)
{
	int row, col, tmp;

	if ((n < 0) || (n > 15))
		return;
	for (row = 0; row <= n; row++)
	{
		tmp = row;
		_putchar('0');
		for (col = 0; col < n; col++)
		{
			if (tmp < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(tmp + '0');
			}
			else if (tmp < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((tmp / 10) + '0');
				_putchar((tmp % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((tmp / 100) + '0');
				_putchar((tmp / 10) % 10 + '0');
				_putchar((tmp % 10) + '0');
			}
			tmp += row;
		}
		_putchar('\n');
	}
}
