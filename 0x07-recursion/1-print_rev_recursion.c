#include "holberton.h"

/**
 * _print_rev_recursion - function prints a string in reverse
 * @s: string to print
 *
 * Return: none
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
