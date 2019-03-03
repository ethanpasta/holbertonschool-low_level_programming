#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of parameters
 * @argv: array of strings - parameters
 *
 * Return: exit value
 */
int main(int __attribute__((unused))argc, char *argv[])
{
	if (!argv[1] || !argv[2])
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
