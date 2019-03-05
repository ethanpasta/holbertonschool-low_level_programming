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
	int i = 0, j = 0;
	char *s;

	if (s1)
		for (i = 0; s1[i] != '\0'; i++)
			;
	if (s2)
		for (j = 0; s2[j] != '\0'; j++)
			;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s)
	{
		if (s1 == NULL)
		{
			for (i = 0; s2[i] != '\0'; i++)
				s[i] = s2[i];
			s[i] = '\0';
		}
		else if (s2 == NULL)
		{
			for (i = 0; s1[i] != '\0'; i++)
				s[i] = s1[i];
			s[i] = '\0';
		}
		else
		{
			for (i = 0; s1[i] != '\0'; i++)
				s[i] = s1[i];
			for (j = i; s2[j - i] != '\0'; j++)
				s[j] = s2[j - i];
			s[j] = s2[j];
		}
	}
	else
		return (NULL);
	return (s);
}
