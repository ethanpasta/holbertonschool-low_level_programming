#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int contain_c(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return 1;
		s++;
	}
	return 0;
}

/**
 * main - entry point
 * @argc: number of parameters
 * @argv: array of strings - parameters
 *
 * Return: exit value
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (contain_c(argv[i]))
		{
			printf("Error\n");
			return 1;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return 0;
}
