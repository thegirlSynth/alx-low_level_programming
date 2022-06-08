#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number to be checked.
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;

	if (n < 0)
		ld = -ld;

	return (ld);
}
