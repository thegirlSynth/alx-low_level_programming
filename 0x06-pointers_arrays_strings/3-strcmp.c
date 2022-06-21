#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: the first string to be compared.
 * @s2: the second string to be compared.
 *
 * Return: 0 if equal, -15 if less than, 15 if greater than.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);

}
