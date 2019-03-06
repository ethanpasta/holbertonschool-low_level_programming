#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function concatenates all arguments
 * @ac: number of arguments
 * @av: double array of parameter strings
 *
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i = 0, j = 0, size = 0, pos = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
			size++;
		}
		i++;
	}
	j = 0;
	size += (ac + 1);
	str = malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	while (j < ac)
	{
		for (i = 0; av[j][i] != '\0'; i++)
		{
			str[pos++] = av[j][i];
		}
		str[pos++] = '\n';
		j++;
	}
	str[pos] = '\0';
	return (str);
}
