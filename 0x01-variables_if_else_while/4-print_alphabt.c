#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the letters of the alphabet in lowercase
 * except q and e, followed by a new line.
 * Return: 0 if exited properly
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}

	putchar('\n');

	return (0);
}
