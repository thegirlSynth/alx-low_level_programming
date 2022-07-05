#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string to be concatenated.
 * @s2: second string to be concatenated.
 *
 * @n: The maximum number of bytes of s2 to concatenate to s1
 * Return: a pointer to a newly allocated space in memory
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *Dest;
	int i, len = n;


	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";


	if (i = 0; s1[i]; i++)
		len++;

	*Dest = malloc(sizeof(char) * (len + 1));

	if (Dest == NULL)
	{
		return (NULL);
	}

	len = 0;

	for (i = 0; s1[i]; i++)
		Dest[len++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		Dest[len++] = s2[i];

	Dest[len] = '\0';

	return (Dest);
}
