#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 * Return: 0 if exited properly.
 */

int main(void)
{
	int n, m;

	n = 0;
	while (n <= 99)
	{
		m = 0;
		while (m <= 99)
		{
			if (n != m && m > n)
			{
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
				putchar(' ');

				putchar((m / 10) + '0');
				putchar((m % 10) + '0');

				if (n != 98 || m != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			m++;
		}
		n++;
	}

	return (0);
}
