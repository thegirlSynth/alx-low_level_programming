#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: string to be printed.
 *
 */

void puts_half(char *str)
{
	int len, num, count;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		num = len / 2;
	}

	else 
	{
		num = (len - 1) / 2;
	}

	for (count = num; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}

	_putchar('\n');
}
