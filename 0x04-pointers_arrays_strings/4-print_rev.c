#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 *
 */
void print_rev(char *s)
{
	int count = 0, i, j;

	while (s[count++]);
		;
	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
