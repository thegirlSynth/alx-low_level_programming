#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * return: 0 if exited properly.
 */

int main(void)
{
	int num;
	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
