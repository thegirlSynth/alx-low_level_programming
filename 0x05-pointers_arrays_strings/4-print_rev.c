#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: string to be printed in reverse.
 */

void print_rev(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}

	while (count >= 0)
	{
		_putchar(s[count]);
		count--;
	}
}
