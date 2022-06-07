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

	for (num = '0'; num <= '9'; num++)
	{
		for (remd = '0'; remd <= '9'; remd++)
		{
			if (num != remd && !(remd < num))
			{
				putchar(num);
				putchar(remd);

				if (num != '8' || remd != '9' )
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
