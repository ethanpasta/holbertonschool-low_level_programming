#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function frees a 2 dimensional grid
 * @grid: grid to free
 * @height: height of the grid
 *
 * Return: none.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (!grid || !height)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
