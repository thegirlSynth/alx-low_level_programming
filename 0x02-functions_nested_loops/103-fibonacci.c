#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms,
 * in a fibonacci sequence, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, c, sum;

	a = 1;
	b = 2;

	while (c < 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
			sum += c;
	}
	printf("%i\n", sum);
	return (0);
}
