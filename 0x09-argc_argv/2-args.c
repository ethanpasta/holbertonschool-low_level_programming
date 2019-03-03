#include <stdio.h>
#include "holberton.h"

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

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
