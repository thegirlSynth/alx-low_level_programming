#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list begin;
	unsigned int i;
	char *string;

	va_start(begin, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(begin, char *);

		if (!(separator == NULL) && i > 0)
			printf("%s", separator);
		if (string == NULL)
			printf("nil");
		else
			printf("%s", string);
	}
	printf("\n");
	va_end(begin);
}
