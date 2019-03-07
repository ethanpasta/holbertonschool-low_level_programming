#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters to copy from s2
 *
 * Return: pointer to a newly allocated space, which contains
 * s1 followed by the first n bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, size1 = 0, size2 = 0, pos = 0;
	char *s;

	if (s1)
		for (i = 0; s1[i] != '\0'; i++)
			size1++;
	if (s2)
		for (i = 0; s2[i] != '\0'; i++)
			size2++;
	if (n > size2)
		n = size2;
	s = malloc(sizeof(char) * (size1 + n + 1));
	if (!s)
		return (NULL);
	for (pos = 0; pos < size1; pos++)
		s[pos] = s1[pos];
	i = 0;
	while (i < n && s2[i] != '\0')
		s[pos++] = s2[i++];
	s[pos] = '\0';
	return (s);
}
