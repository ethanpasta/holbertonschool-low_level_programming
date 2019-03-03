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

	while (change > 0)
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
		cents++;
	}
	printf("%d\n", cents);
	return (0);
}
