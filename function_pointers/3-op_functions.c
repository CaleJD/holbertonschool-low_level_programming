#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: first integer
 * @b: second integer
 * Return: difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: numerator
 * @b: denominator
 * Return: quotient of a divided by b
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

/**
 * op_mod - calculates the remainder of two integers
 * @a: dividend
 * @b: divisor
 * Return: remainder of a divided by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
