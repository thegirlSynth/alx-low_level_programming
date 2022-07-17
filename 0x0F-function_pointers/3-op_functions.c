#include "3-calc.h"

/**
 * op_add - returns the sum of two numbers.
 * @a: the first number
 * @b: the second number
 * Return: the sum of a and b.
 */

int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - returns the difference of two numbers.
 * @a: the first number
 * @b: the second number
 * Return: the difference of a and b.
 */

int op_sub(int a, int b)
{
	int diff;

	diff = a - b;
	return (diff);
}

/**
 * op_mul - returns the product of two numbers.
 * @a: the first number
 * @b: the second number
 * Return: the product of a and b.
 */
int op_mul(int a, int b)
{
	int product;

	product = a * b;
	return (product);
}

/**
 * op_div - returns the result of the division of a by b.
 * @a: the first number
 * @b: the second number
 * Return: the result.
 */

int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}

/**
 * op_mod - returns the remainder of the division of a by b.
 * @a: the first number
 * @b: the second number
 * Return: the result.
 */

int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
