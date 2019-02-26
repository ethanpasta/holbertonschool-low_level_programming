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
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
