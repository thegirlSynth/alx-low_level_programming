#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: the parameter that determines where to start printing from.
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			if (n < 10 )
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
				n++;
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				_putchar(',');
				_putchar(' ');
				n++;
			}
		}
		_putchar(n + '0');
	}
	else
	{
		while (n > 98)
		{
			if (n < 10 )
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
				n--;
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				_putchar(',');
				_putchar(' ');
				n--;
			}
		}
		_putchar(n + '0');
	}
	_putchar('\n');
}
