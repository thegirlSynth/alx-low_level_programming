#include "main.h"


/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int count = 1, i, j;

	if (size <= 0)
		_putchar('\n');

	else
	{
		while (count <= size)
		{
			for (j = 1; j <= (size - count); j++)
				_putchar(' ');
			for (i = 1; i <= count; i++)
				_putchar('#');
			_putchar('\n');
			count++;
		}
	}
}
