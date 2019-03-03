#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of parameters
 *
 * Return: exit value
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int cents = 0, change = atoi(argv[1]);

	if (change < 0)
	{
		printf("0\n");
		return (0);
	}
	while (change >= 25)
	{
		cents += 1;
		change -= 25;
	}
	while (change >= 10)
	{
		cents += 1;
		change -= 10;
	}
	while (change >= 5)
	{
		cents += 1;
		change -= 5;
	}
	while (change >= 2)
	{
		cents += 1;
		change -= 2;
	}
	if (change != 0)
		cents += 1;
	printf("%d\n", cents);
	return (0);
}
