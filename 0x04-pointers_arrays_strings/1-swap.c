#include "holberton.h"

/**
 * swap_int - Function swaps values of two integers
 * @a: first integer
 * @b: second integer
 *
 */
void swap_int(int *a, int *b)
{
	int *tmp = a;
	*a = *b;
	*b = *tmp;
}
