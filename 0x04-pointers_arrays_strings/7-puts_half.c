#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - Function prints half of a string
 * @str: The string to use
 *
 */
void puts_half(char *str)
{
	int size = 0;
	int n;

	for (; str[size] != '\0'; size++)
	{}
	if (size % 2 == 0)
	{
		n = size / 2;
	}
	else
	{
		n = (size + 1) / 2;
	}

	for (; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
