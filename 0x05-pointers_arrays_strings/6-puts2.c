#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: string to be printed.
 *
 */

void puts2(char *str)
{
	int len, num;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (num = 0; num < len; num += 2)
	{
		_putchar(str[num]);
	}
	_putchar('\n');
}
