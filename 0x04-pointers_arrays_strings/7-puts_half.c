#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - Function prints half of a string
 * @str: The string to use
 *
 */
void puts_half(char *str)
{
	int size = -1, n, i;

	while (str[++size])
		;
	n = size / 2;
	if (size % 2 == 1)
		n = (size - 1) / 2;
	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
