#include "3-calc.h"

/**
 * op_add - sums two integers
 * @a: integer
 * @b: integer
 *
 * Return: returns the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds the difference of two integers
 * @a: integer
 * @b: integer
 *
 * Return: returns the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of two integers
 * @a: integer
 * @b: integer
 *
 * Return: returns the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the qoutient (division) of two integers
 * @a: integer
 * @b: integer
 *
 * Return: returns the reuslt of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the modulus of two intgers
 * @a: integer
 * @b: integer
 *
 * Return: returns the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
