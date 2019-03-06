#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - function splits a string into words
 * @str: string to split up
 *
 * Return: a pointer to an array of strings
 */
char **strtow(char *str)
{
	char **a;
	int i = 0, j = 0, pos = 0, size = 0, words = 0, tmp;

	if (str == NULL || *str == '\0')
		return (NULL);
	while (str[i])
	{
		if (str[i] != ' ')
		{
			words++;
			while (str[i] != ' ' && str[i])
				i++;
		}
		else
			i++;
	}
	a = (char **)malloc(sizeof(char *) * (words + 1));
	if (!a)
		return (NULL);
	j = 0;
	for (i = 0; i < words; i++)
	{
		size = 0;
		while (str[pos] == ' ')
			pos++;
		tmp = pos;
		while (str[pos++] != ' ')
			size++;
		a[i] = malloc(sizeof(char) * (size + 1));
		if (!a[i])
		{
			while (i--)
				free(a[i]);
			free(a);
			return (NULL);
		}
		for (j = 0; j < size; j++)
		{
			a[i][j] = str[tmp];
			tmp++;
		}
		a[i][j] = '\0';
	}
	a[i] = NULL;
	return (a);
}
