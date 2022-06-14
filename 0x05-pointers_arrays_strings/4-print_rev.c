#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: string to be printed in reverse.
 */

void print_rev(char *s)
{
	int count, red;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}

	red = count - 1;

	while (red >= 0)
	{
		_putchar(s[red]);
		red--;
	}
	_putchar('\n');
}
