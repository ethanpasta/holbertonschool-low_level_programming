#!/usr/bin/python3
"""Custom module 5-island_perimeter.py"""


def island_perimeter(grid):
    """Function returns the perimeter of the island described in grid

    Args:
       grid: grid
    """
    perims = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                if i <= 0 or grid[i - 1][j] == 0:
                    perims += 1
                if j <= 0 or grid[i][j - 1] == 0:
                    perims += 1
                if j >= len(grid[i]) - 1 or grid[i][j + 1] == 0:
                    perims += 1
                if i >= len(grid) - 1 or grid[i + 1][j] == 0:
                    perims += 1
    return perims
