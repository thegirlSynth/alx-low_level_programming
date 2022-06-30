#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with.
 *
 * Return: If size == 0 or the function fails - NULL.
 * Otherwise - a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	a = (char *) malloc(sizeof(char) * size);

	if (a == NULL)
	{
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		*(a + i) = c;
	}
	*(a + i) = '\0';

	return (a);
}
