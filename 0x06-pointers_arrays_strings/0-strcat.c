#include "main.h"

/**
 * *_strcat - concatenates two strings.
 *
 * @*dest: the destination string.
 * @*src: the source string.
 * @Return: a pointer to the resulting string, dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k, len, leng;

	len = 0;
	leng = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		leng++;
	}

	for (k = 0; k <= leng; k++)
	{
		dest[len] = src[k];
		len++;
	}

	return (dest);
}
