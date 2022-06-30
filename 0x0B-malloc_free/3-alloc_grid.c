#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the width of the 2d array.
 * @height: the height of the 2d array.
 * Return: a pointer to the 2d array; NULL if it fails.
 */

int **alloc_grid(int width, int height)
{
	int **dArray;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	dArray = (int **) malloc(sizeof(int *) * height);

	if (dArray == NULL)
		return (NULL);


	for (i = 0; i < height; i++)
	{
		dArray[i] = (int *) malloc(sizeof(int) * width);

		if (dArray[i] == NULL)
		{
			free(dArray);
			for (j = 0; j <= i; j++)
				free(dArray[j]);
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			dArray[i][j] = 0;
		}
	}

	return (dArray);

	
}
