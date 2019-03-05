#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function creates a returns a 2
 * dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to array, or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (height <= 0 || width <= 0)
		return (NULL);
	arr = malloc(sizeof(int) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
