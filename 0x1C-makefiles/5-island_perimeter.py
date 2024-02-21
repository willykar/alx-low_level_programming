#!/usr/bin/python3
"""A model called 5-island_perimeter"""


def island_perimeter(grid):
    """A function that returns the perimeter of the island"""

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4

                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2

    return perimeter
