/*
 * File: 3-op_functions.c
 * Operation functions
 */
#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: returns the sum of the two ints
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds the difference of two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: returns the difference of the two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - finds the product of two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: returns the product of the two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - finds the qoutient of two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: returns the qoutient ofthe division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the modulus (remainder) of two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: returns the modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
