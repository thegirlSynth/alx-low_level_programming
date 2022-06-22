#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int i, a, b, next;

	i = 0;
	a = 1;
	b = 2;

	printf("%lu", a);
	printf(", %lu", b);

	while (i < 48)
	{
		next = a + b;
		printf(", %lu", next);
		a = b;
		b = next;

		i++;
	}
	putchar('\n');
	return (0);
}
