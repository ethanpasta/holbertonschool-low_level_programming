#include <stdio.h>
#include "holberton.h"

/**
 * _strpbrk - function searches a string for any
 * set of bytes
 * @s: the string to search
 * @accept: the string of characters to search for
 *
 * Return: a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if not byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
