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

			if (l > 9)
			{
				putchar((l / 10) + '0');
				putchar((l % 10) + '0');
			}
			else if (l <= 9)
			{
				putchar((l % 10) + '0');
				putchar(' ');
			}

			if (mul != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
		num++;
	}

	putchar('\n');
}
