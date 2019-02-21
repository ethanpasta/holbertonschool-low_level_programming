#include "holberton.h"

/**
 * string_toupper - function changes all
 * lowercase letters of a string to uppercase
 * @s: string to change
 *
 * Return: new string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] <= 122 && s[i] >= 97)
			s[i] -= 32;
		i++;
	}
	return (s);
}
