#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function returns a newly allocated
 * space in memory, which contains a copy of the string
 * @str: the string to copy
 *
 * Return: NULL if insufficient memory is available, pointer
 * to the duplicated string otherwise
 */
char *_strdup(char *str)
{
	int i, size = 0;
	char *s;

	if (!str)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		size++;
	size++;
	s = malloc(sizeof(char) * size);
	if (s)
		for (i = 0; i < size; i++)
			s[i] = str[i];
	else
		return (NULL);
	return (s);
}
