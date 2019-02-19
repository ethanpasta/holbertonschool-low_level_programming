#include <stdio.h>
#include "holberton.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: the array
 * @n: the number of elements to print
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i == n)
			printf("%d", a[i - 1]);
		else
			printf("%d, ", a[i - 1]);
	}
	putchar('\n');
}
