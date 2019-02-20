#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - Function reverses a string
 * @s: string to reverse
 *
 */
void rev_string(char *s)
{
	int tmp, i, size = 0;

	while (s[size++])
		;
	size = size - 2;
	for (i = 0; i <= size / 2; i++)
	{
		tmp = s[i];
		s[i] = s[size - i];
		s[size - i] = tmp;
	}
}
