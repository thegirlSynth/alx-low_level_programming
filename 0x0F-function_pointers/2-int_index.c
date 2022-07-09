#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: is the array of elements.
 * @size: the number of elements in the array array
 * @cmp:is a pointer to the function to be used to compare values
 * Return: returns the index of the first element for which the cmp function
 * does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}

