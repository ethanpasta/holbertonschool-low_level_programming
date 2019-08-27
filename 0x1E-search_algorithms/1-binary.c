#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search_recursive - function recursively searches
 * for a value in a sorted array
 * @s: start position
 * @e: end position
 * @array: the array
 * @value: value to search for
 *
 * Return: index of match or -1
 */
int binary_search_recursive(int s, int e, int *array, int value)
{
	int i, mid;

	if (e >= s)
	{
		printf("Searching in array: %d", array[s]);
		for (i = s + 1; i <= e; i++)
			printf(", %d", array[i]);
		printf("\n");
		mid = (s + e) / 2;
		if (value == array[mid])
			return (mid);
		else if (value > array[mid])
			return (binary_search_recursive(mid + 1, e, array, value));
		else
			return (binary_search_recursive(s, mid - 1, array, value));
	}
	return (-1);
}


/**
 * binary_search - function searches for a value in a sorted array
 * of integers using the binary search algorithm
 * @array: pointer to the first element in the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the index where value is located, or -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_search_recursive(0, size - 1, array, value));
}
