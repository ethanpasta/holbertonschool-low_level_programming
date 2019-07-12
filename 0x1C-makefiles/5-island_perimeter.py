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
                if grid[i - 1][j] == 0:
                    perims += 1
                if grid[i + 1][j] == 0:
                    perims += 1
                if grid[i][j + 1] == 0:
                    perims += 1
                if grid[i][j - 1] == 0:
                    perims += 1
    return perims
