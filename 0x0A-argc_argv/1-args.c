#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguements passed
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 * Return: always zero
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
