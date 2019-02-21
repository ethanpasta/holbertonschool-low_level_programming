#include "holberton.h"

/**
 * _strcmp - function compares two strings
 * @s1: first string to compare
 * @s2: string to compare two
 *
 * Return: 0 if strings are equal,
 * other number otherwise that is the difference
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (diff);
}
