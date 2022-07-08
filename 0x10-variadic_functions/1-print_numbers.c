#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list begin;
	unsigned int i, num;

	va_start(begin, n);

	for (i = 0; i < n; i++)
	{
		if (!(separator == NULL) && i > 0)
			printf("%s", separator);

		num = va_arg(begin, unsigned int);
		printf("%d", num);
	}
	putchar('\n');
	va_end(begin);
}
