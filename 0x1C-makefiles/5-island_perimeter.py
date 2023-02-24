#!/usr/bin/python3
"""This module contains a function `island_perimeter`"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""

    perimeter = 0
    grid_index = 0

    for list in grid:
        list_index = 0

        for number in list:
            if number == 0:
                list_index += 1
                continue

            if grid_index == 0:
                perimeter += 1

            if grid_index > 0:
                if grid[grid_index - 1][list_index] == 0:
                    perimeter += 1

            if grid_index < len(grid) - 1:
                if grid[grid_index + 1][list_index] == 0:
                    perimeter += 1

            if grid_index == len(grid) - 1:
                perimeter += 1

            if list_index == 0:
                perimeter += 1

            if list_index < len(list) - 1:
                if list[list_index + 1] == 0:
                    perimeter += 1

            if list_index > 0:
                if list[list_index - 1] == 0:
                    perimeter += 1

            if list_index == len(list) - 1:
                perimeter += 1

            list_index += 1

        grid_index += 1

    return perimeter
