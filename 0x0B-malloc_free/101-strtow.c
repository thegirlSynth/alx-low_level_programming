#include "main.h"
#include <stdlib.h>

/**
 * word_len - counts the number of words in a string.
 * @s: string to check
 *
 * Return: number of words
 */

int word_len(char *s)
{
	int index, count, len;

	index = 0;
	len = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == ' ')
			index = 0;

		else if (index == 0)
		{
			index = 1;
			len++;
		}
	}

	return (len);
}

/**
 * strtow - splits a string into words.
 * @str: the string of words.
 *
 * Return: A pointer to an array of words
 */

char **strtow(char *str)
{
	char **strings, *element;
	int i, j = 0, len = 0, words, k = 0, open, close;

	while (*(str + len))
		len++;

	words = word_len(str);

	if (words == 0)
		return (NULL);

	strings = (char **) malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (k)
			{
				close = i;
				element = (char *) malloc(sizeof(char) * (k + 1));
				if (element == NULL)
					return (NULL);
				while (open < close)
					*element++ = str[open++];
				*element = '\0';

				strings[j] = element - k;
				j++;
				k = 0;
			}
		}
		else if (k++ == 0)
			open = i;
	}

	strings[j] = NULL;
	return (strings);
}
