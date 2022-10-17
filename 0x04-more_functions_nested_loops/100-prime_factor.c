#include <stdlib.h>
#include <stdio.h>

/**
 * check_prime - checks if a number is a prime number.
 * @num: the number to be checked
 * Return: the functions returns 1 if the number is not a prime number.
 *	It returns 0 if the number is a prime number.
 */


int check_prime(unsigned long int num)
{
	unsigned long int i;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			return (1);
	}
	return (0);
}


/**
 * main - finds the largest prime factor of the number 612852475143
 * Return: 0 on success
 */

int main(void)
{
	unsigned long int max = 1, number = 612852475143, factor = 2;

	for (; number > 1;)
	{
		if (number % factor == 0 && check_prime(factor) == 0)
		{
			number = number / factor;
			if (factor > max)
				max = factor;
		}
		else
			factor++;
	}
	printf("%lu\n", max);
	return (0);
}
