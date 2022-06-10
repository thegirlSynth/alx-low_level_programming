#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 */

void more_numbers(void)
{
	int num, mul;

	num = 0;
	while (num <= 10)
	{
		mul = 0;
		while (mul <= 14)
		{
			if (mul >= 10)
			{
				_putchar(mul / 10 + '0');
			}
			_putchar(mul % 10 + '0');
			mul++;
		}
		_putchar('\n');
		num++;
	}
}
