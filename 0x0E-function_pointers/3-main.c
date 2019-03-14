#include "3-calc.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of parameters
 *
 * Return: exit status
 */
int main(int argc, char **argv)
{
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	fun = get_op_func(argv[2]);
	if (!fun)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", fun(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
