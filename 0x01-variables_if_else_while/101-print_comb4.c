#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints all possible different combinations of two digits.
 * separated by ,, followed by a space. The two digits must be different.
 * Return: Always zero.
 */

int main(void)
{
	int num;
	int remd;
	int thrd;

	for (num = '0'; num <= '9'; num++)
	{
		for (remd = '0'; remd <= '9'; remd++)
		{
			for (thrd = '0'; thrd <= '9'; thrd++)
			{
				if (num != remd && remd != thrd && thrd > remd && remd > num)
				{
					putchar(num);
					putchar(remd);
					putchar(thrd);

					if (num != '8' || remd != '9' )
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
