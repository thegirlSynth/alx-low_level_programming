#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function
 *
 */

void print_all(const char * const format, ...)
{
	va_list begin;
	int i = 0, j = 0;
	char *string;

	va_start(begin, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{ case 'c':
			switch (j)
			{ case 1: printf(", "); }
			j = 1;
			printf("%c", va_arg(begin, int));
			break;
		case 'i':
			switch (j)
			{ case 1: printf(", "); }
			j = 1;
			printf("%i", va_arg(begin, int));
			break;
		case 'f':
			switch (j)
			{ case 1: printf(", "); }
			j = 1;
			printf("%f", va_arg(begin, double));
			break;
		case 's':
			switch (j)
			{ case 1: printf(", "); }
			j = 1;
			string = va_arg(begin, char*);
			if (string)
			{ printf("%s", string);
			break; }
			printf("%p", string);
			break; }
		i++;
	}
	printf("\n");
	va_end(begin);
}
