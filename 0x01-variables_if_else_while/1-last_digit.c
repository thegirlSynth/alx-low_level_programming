#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the last digit of the number stored in
 * the variable n.
 * Return: Always 0.
 */

int main(void)
{
	int n;
	int L;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L = n % 10;
	printf("Last digit of %d is %d", n, L);

	if (L > 5)
		printf(" and is greater than 5\n");
	else if (L == 0)
		printf(" and is 0\n");
	else if (L < 6 && L != 0)
		printf(" and is less than 6 and not 0\n");
	return (0);
}
