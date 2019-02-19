#include "holberton.h"

/**
 * puts_half - Function prints half of a string
 * @str: The string to use
 *
 */
void puts_half(char *str)
{
	int size = 0, n, i;

	for (i = 0; str[i]; i++)
		size++;
	n = size / 2;
	if ((size % 2) != 0)
		n = (size - 1) / 2;
	for (i = n; i <= size; i++)
		_putchar(str[i]);
	_putchar('\n');
}
