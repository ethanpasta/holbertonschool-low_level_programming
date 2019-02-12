#include "holberton.h"

/**
 * times_table - Function prints the 9 times table
 */
void times_table(void)
{
	int row, tmp, col;

	for (row = 0; row < 10; row++)
	{
		tmp = row;
		_putchar('0');
		for (col = 0; col < 9; col++)
		{
			if (tmp > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((tmp / 10) + '0');
				_putchar((tmp % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(tmp + '0');
			}
			tmp += row;
		}
		_putchar('\n');
	}
}
