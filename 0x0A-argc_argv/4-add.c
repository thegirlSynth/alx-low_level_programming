#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- adds positive numbers.
 * @argc: the count of arguments passed to main
 * @argv: an array of pointers that point to the values passed.
 *
 * Return: 0, if no number is passed; -1 if there are no digits.
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i= 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
