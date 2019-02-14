#include "holberton.h"

/**
 * print_diagonal - Function draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 *
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		j = i;
		while (j--)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
