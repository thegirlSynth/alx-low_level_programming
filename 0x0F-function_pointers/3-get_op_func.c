#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 * the operation asked by the user.
 * @s: the string to be conpared.
 * Return: a pointer to the desired function.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && *s != *(ops[i].op))
		i++;

	return (ops[i].f);
}
