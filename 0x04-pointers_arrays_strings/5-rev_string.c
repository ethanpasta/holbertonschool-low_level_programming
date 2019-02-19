#include "holberton.h"

/**
 * rev_string - Function reverses a string
 * @s: string to reverse
 *
 */
void rev_string(char *s)
{
	int size = 0, i;
	char tmp;

	for (i = 0; s[i] != 0; i++)
		size++;
	size--;
	for (i = 0; i < size / 2; i++)
	{
		tmp = s[i];
		s[i] = s[size - i];
		s[size - i] = tmp;
	}
}
