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
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
