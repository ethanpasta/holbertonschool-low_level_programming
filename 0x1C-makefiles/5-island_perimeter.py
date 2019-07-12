#!/usr/bin/python3
"""Custom module 5-island_perimeter.py"""


def island_perimeter(grid):
    """Function returns the perimeter of the island described in grid

    Args:
       grid: grid
    """
    perims = 0
    for i in range(1, len(grid) - 1):
        for j in range(1, len(grid[i]) - 1):
            if grid[i][j] == 1:
                num_ones = 0
                num_ones += grid[i - 1][j] + grid[i + 1][j]
                num_ones += grid[i][j + 1] + grid[i][j - 1]
                perims += (4 - num_ones)
    return perims
