#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * @s: String to be reversed.
 *
 */

void rev_string(char *s)
{
	char store;
	int count, red, num;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	red = count - 1;

	num = 0;
	while (num < (count / 2))
	{
		store = s[num];
		s[num] = s[red];
		s[red--] = store;

		num++;
	}
}
