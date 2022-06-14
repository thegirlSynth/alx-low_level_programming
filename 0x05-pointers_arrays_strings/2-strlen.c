#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: string to be checked.
 *
 * Return: the length of the string.
 */

int _strlen(char *s)
{
	int count;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}
