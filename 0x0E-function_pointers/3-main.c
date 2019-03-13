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
	int num1, num2, result;
	char *ch;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[3][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	ch = argv[2];
	fun = get_op_func(ch);
	result = fun(num1, num2);
	printf("%d\n", result);
	return (0);
}
