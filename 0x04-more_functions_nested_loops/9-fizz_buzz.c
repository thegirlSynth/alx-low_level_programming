#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * But for multiples of three, it prints Fizz instead of the number
 * and for the multiples of five, it prints Buzz.
 * For numbers which are multiples of both three and five, it prints FizzBuzz.
 * Each number or word is separated by a space.
 * Return: 0 on success.
 */

int main(void)
{
	int index = 1;

	printf("%d", index);

	while (index > 0 && index <= 99)
	{
		index++;
		if (index % 3 == 0)
		{
			printf(" Fizz");
			if (index % 5 == 0)
				printf("Buzz");
			continue;
		}
		if (index % 5 == 0)
		{
			printf(" Buzz");
			continue;
		}
		printf(" %d", index);
	}
	printf("\n");
	return (0);
}
