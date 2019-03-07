#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function creates an array of integers
 * @min: value to start from
 * @max: value to stop at
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *arr, i = 0;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (!arr)
		return (NULL);
	while (min <= max)
		arr[i++] = min++;
	return (arr);
}
