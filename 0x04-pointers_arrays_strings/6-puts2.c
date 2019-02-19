#include "holberton.h"

/**
 * puts2 - Function prints one char out of two
 * @str: string to use
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] || str[i + 1]; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
