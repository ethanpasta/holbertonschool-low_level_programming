#include "holberton.h"

/**
 * print_line - Function draws a line n characters long
 * @n: number of times to print _ character
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
