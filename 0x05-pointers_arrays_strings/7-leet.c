#include "holberton.h"

/**
 * leet - function encodes a string into 1337
 * @s: string to encode
 *
 * Return: updated string
 */
char *leet(char *s)
{
	char ch[11] = "aAeEoOtTlL";
	char cmp[11] = "4433007711";
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; ch[j] != '\0'; j++)
			if (s[i] == ch[j])
				s[i] = cmp[j];
		i++;
	}
	return (s);
}
