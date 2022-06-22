#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string
 */

char *leet(char *s)
{
	int i, j;

	char xter[11] = {"aeotlAEOTL"};
	char val[11] = {"4307143071"};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 11; j++)
		{
			if (s[i] == xter[j])
			{
				s[i] = val[j];
			}
		}
	}

	return (s);
}
