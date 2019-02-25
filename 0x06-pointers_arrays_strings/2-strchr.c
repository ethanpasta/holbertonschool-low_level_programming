#include "holberton.h"

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
	return ('\0');
}
