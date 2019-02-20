#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - Function prints half of a string
 * @str: The string to use
 *
 */
void puts_half(char *str)
{
	int size = 0, n;

	while (str[size] != '\0')
		size++;
	if (size % 2 == 1)
		n = (size - 1) / 2;
	else
		n = size / 2;
	for (; str[n] != '\0'; n++)
		_putchar(str[n]);
	_putchar('\n');
}
