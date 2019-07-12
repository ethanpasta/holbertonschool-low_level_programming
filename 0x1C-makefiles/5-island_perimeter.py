#!/usr/bin/python3
"""Custom module 5-island_perimeter.py"""


def island_perimeter(grid):
    """Function returns the perimeter of the island described in grid

    Args:
       grid: grid
    """
    perims = sum([sum(grid[i]) for i in range(len(grid))])
    return ((perims * 2) + 2) if perims != 0 else 0
