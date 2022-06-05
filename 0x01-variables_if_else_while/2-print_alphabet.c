#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: 0 if exited properly, EOF otherwise
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
