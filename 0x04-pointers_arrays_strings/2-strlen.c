#include "holberton.h"

/**
 * _strlen - returns length of a string
 * @s: string to check
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int count = -1;

	while (s[++count] != 0)
		;
	return (count);
}
