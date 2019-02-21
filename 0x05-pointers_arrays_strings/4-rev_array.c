#include "holberton.h"

/**
 * reverse_array - function reverses the content
 * of an array of integers
 * @a: the array
 * @n: the number of elements
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
