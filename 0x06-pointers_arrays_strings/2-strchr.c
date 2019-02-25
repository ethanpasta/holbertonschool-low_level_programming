#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - function locates a character in a string
 * @s: string to search
 * @c: character to locate
 *
 * Return: pointer to the character
 */
char *_strchr(char *s, char c)
{
	char s1;

	while (*s)
	{
		s1 = *s++;
		if (s1 == c)
			return (s - 1);
	}
	return (NULL);
}
