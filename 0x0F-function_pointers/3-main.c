#include "3-calc.h"

/**
 * main - performs simple arithmetic operations.
 * @argc: the number of arguments.
 * @argv: an array of arguement values.
 * Return: 0 on success;
 */

int main(int argc, char **argv)
{
	int num1, num2;
	char *str;
	int (*func)(int, int);
	int num;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	str = argv[2];

	func = get_op_func(str);
	if (func == NULL || str[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*str == '/' && num2 == 0) ||
		(*str == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	num = func(num1, num2);

	printf("%d\n", num);
	return (0);
}
