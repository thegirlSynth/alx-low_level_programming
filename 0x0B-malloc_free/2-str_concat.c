#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 * Otherwise - a pointer the newly-allocated space in memory
 * containing the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int index, index2, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len1++;

	for (index2 = 0; s2[index2]; index2++)
		len2++;

	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
		return (NULL);

	for (index = 0; index < len1; index++)
	{
		concat[index] = s1[index];
	}

	for (index = 0; index < len2; index++)
	{
		concat[len1] = s2[index];
		len1++;
	}

	concat[len1] = '\0';

	return (concat);
}
