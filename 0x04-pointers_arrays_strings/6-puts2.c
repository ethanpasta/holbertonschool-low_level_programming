#include "holberton.h"

/**
 * puts2 - Function prints one char out of two
 * @str: string to use
 *
 */
void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i]; i++)
		;
	for (j = 0; j < i; j += 2)
		_putchar(str[j]);
	_putchar('\n');
}
