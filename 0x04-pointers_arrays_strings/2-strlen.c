#include "holberton.h"

/**
 * _strlen - returns length of a string
 * @c: string to check
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;
	int count = 0;

	while (s[count++] != 0)
		;
	return (count);
}
