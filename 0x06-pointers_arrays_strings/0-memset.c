#include "holberton.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: memory area pointed to by s
 * @b: byte to copy
 * @n: the first n bytes to copy
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n--)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
