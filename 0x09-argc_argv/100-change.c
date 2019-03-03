#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * coin - calculates and returns the minimum number of coins
 * @change: the change to use
 *
 * Return: coin count
 */
int coin(int change)
{
	int coins = 0;

	while (change)
	{
		if (change >= 25)
			change -= 25;
		else if (change >= 10)
			change -= 10;
		else if (change >= 5)
			change -= 5;
		else if (change >= 2)
			change -= 2;
		else if (change >= 1)
			change -= 1;
		coins++;
	}
	return (coins);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of parameters
 * Return: exit value
 */
int main(int argc, char *argv[])
{
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change < 0)
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", coin(change));
	return (0);
}
