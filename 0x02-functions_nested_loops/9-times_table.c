#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int num, mul, l;

	num = 0;

	while (num <= 9)
	{
		for (mul = 0; mul <= 9; mul++)
		{
			l = (num * mul);

			if (mul != 0)
			{
				if (l <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(l + '0');
				}

				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((l / 10) + '0');
					_putchar((l % 10) + '0');
				}

			}

			else
			{
				_putchar(l + '0');
			}
		}
		_putchar('\n');
		num++;
	}

}
