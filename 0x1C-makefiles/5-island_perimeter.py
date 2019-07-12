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
            if grid[i][j] == 1:
                num_ones = 0
                if i > 0:
                    num_ones += grid[i - 1][j]
                if i < len(grid):
                    num_ones += grid[i + 1][j]
                if j > 0:
                    num_ones += grid[i][j + 1]
                if j < len(grid[i]):
                    num_ones += grid[i][j - 1]
                perims += (4 - num_ones)
    return perims
