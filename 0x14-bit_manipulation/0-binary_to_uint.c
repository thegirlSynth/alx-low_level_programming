#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: a pointer to  a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * - there is one or more chars in the string b that is not 0 or 1
 * - b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, count = 0;
	unsigned int index = 0, unit;

	if (b == NULL)
		return (0);

	while (b)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
	
		count++;
	}

	printf("%u", count);
	unit = count--;

	while(index < count)
	{
		if (b[index] == 1)
			sum += (2 ^ unit);
		unit--;
		index++;
	}

	return (sum);
}
