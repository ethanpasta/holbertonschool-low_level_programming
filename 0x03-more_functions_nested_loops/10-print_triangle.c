#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 *
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		k = i;
		for (j = size - i; j > 0; j--)
			_putchar(' ');
		while (k--)
			_putchar('#');
		_putchar('\n');
	}
}
