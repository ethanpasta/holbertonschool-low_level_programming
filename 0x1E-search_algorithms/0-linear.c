#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - function searches for a value in an array
 * of integers using the linear search algorithm
 * @array: pointer to the first element in the array
 * @size: number of elements in the array
 * @value: value to earch for
 *
 * Return: the index where value is located, or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
