#include "holberton.h"

/**
 * _puts - prints a string followed by a new line
 * @str: string to print
 *
 */
void _puts(char *str)
{
	int i = -1;

	while (str[++i] != 0)
		_putchar(str[i]);
	_putchar('\n');
}
