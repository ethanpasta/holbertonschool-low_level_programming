#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - function prints the sum of the
 * two diagonals of a square matrix of integers
 * @a: the matrix
 * @size: size of the matrix
 *
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	while (i < size)
	{
		sum1 += *(a + (size * i) + i);
		i++;
	}
	i = 1;
	while (i <= size)
	{
		sum2 += *(a + (size * i) - i);
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
