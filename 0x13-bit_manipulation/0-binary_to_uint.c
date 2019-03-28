#include "holberton.h"
#include <stdio.h>

/**
 * if_digits - function checks if string is only 0's or 1's
 * @str: string to check
 *
 * Return: 1 if string is valid, 0 otherwise
 */
int if_digits(const char *str)
{
	if (*str == '\0')
		return (1);
	if (*str == '0' || *str == '1')
		return (if_digits(str + 1));
	else
		return (0);
}

/**
 * binary_to_uint - function converts binary number to an unsigned int
 * @b: string of binary
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int len, twos;
	unsigned int final = 0;

	if (!b || !if_digits(b))
		return (0);
	for (len = 0; b[len]; len++)
		;
	len--;
	twos = 1;
	while (len != -1)
	{
		final += ((b[len] - '0') * twos);
		twos *= 2;
		len--;
	}
	return (final);
}
