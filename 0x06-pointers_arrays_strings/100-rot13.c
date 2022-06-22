#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: the string to be encoded
 *
 * Return: the resulting string
 */

char *rot13(char *s)
{
	int i, j;

	char xter[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char val[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == xter[j])
			{
				s[i] = val[j];
				break;
			}
		}
	}

	return (s);
}
