#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 * Return: Always 0;
 */

void print_alphabet_x10(void)
{
	int a = 0;
	while (a <= 9)
	{
		char ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		a++;
	}
}
