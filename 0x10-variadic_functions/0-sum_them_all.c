#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters
 * Return: the sum of all its parameters. If n == 0, return is 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list first;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	va_start(first, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(first, int);

	va_end(first);
	return (sum);
}

