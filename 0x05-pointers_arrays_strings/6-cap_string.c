#include "holberton.h"

/**
 * cap_string - function capitalizes all words
 * of a string
 * @s: string to change
 *
 * Return: new string
 */
char *cap_string(char *s)
{
	int i = 0, check = 0, j;
	char ch[14] = {' ', '.', '\n', '\t', ',', ';', '!'
		       , '?', '"', '(', ')', '{', '}'};

	if (s[i] <= 122 && s[i] >= 97)
		s[i] -= 32;
	while (s[i] != '\0')
	{
		check = 0;
		for (j = 0; j < 13; j++)
			if (s[i] == ch[j])
				check = 1;
		if (check)
			if (s[i + 1] <= 122 && s[i + 1] >= 97)
				s[i + 1] -= 32;
		i++;
	}
	return (s);
}
