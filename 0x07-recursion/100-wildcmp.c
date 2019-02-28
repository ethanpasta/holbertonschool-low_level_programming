#include "holberton.h"

/**
 * wildmp - function compares two strings with the wildcard
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if equal, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		printf("1: %c %c\n", *s1, *s2);
		return (1);
	}
	else if (*s1 == '\0' && *s2 != '\0')
	{
		printf("2: %c %c\n", *s1, *s2);
		if (*s2 == '*')
			return (1);
		return (0);
	}
	if (*s2 == '*')
	{
		printf("3: %c %c\n", *s1, *s2);
		return (wildcmp(s1, s2 + 1));
	}
	if (*s1 != *s2)
	{
		printf("4: %c %c\n", *s1, *s2);
		return (wildcmp(s1 + 1, s2));
	}
	else
	{
		printf("5: %c %c\n", *s1, *s2);
		return (wildcmp(s1 + 1, s2 + 1));
	}
}
