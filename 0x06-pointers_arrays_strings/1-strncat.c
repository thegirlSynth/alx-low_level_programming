#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: destination string.
 * @src: src string.
 * @n: number of bytes to be used at most.
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, k, len;

	len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}

	for (k = 0; src[k] != '\0' && k < n; k++)
	{
		dest[len] = src[k];
		len++;
	}

	dest[len] = '\0';

	return (dest);
}
