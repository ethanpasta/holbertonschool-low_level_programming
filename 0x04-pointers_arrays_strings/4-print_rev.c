#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 *
 */
void print_rev(char *s)
{
	int i = -1, j;

	while (s[++i])
		;
	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
