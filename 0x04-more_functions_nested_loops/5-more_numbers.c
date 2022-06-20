#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 */

void more_numbers(void)
{
	int num, mul;

	for (num = 0; num <= 10; num++)
	{
		for (mul = 0; mul <= 14; mul++)
		{

			if (mul > 9)
			{
				_putchar((mul / 10) + '0');
			}

			_putchar((mul % 10) + '0');

		}
		_putchar('\n');
	}
}
