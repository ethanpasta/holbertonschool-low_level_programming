#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function concatenates two strings
 * @s1: string to write on
 * @s2: string to copy
 *
 * Return: pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by s2
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, size1 = 0, size2 = 0, pos = 0;
	char *s;

	if (s1)
	{
		for (i = 0; s1[i] != '\0'; i++)
			size1++;
		size1++;
	}
	if (s2)
	{
		for (j = 0; s2[j] != '\0'; j++)
			size2++;
		size2++;
	}
	s = malloc(sizeof(char) * (size1 + size2 - 1));
	if (s)
	{
		i = 0;
		j = 0;
		while (i < size1)
			s[pos++] = s1[i++];
		while (j < size2)
			s[pos++] = s2[j++];
		if (s[pos - 1] != '\0')
			s[pos - 1] = '\0';
		return (s);
	}
	else
		return (NULL);
}
