#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function searches for an integer
 * @array: the array of integers
 * @size: number of elements in the array
 * @cmp: function of comparison
 *
 * Return: the index of the first element for when the
 * cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
