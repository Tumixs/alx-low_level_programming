/*
 * File: 0-sum_them_all.c
 * Author: Asere Oluwatumise S.
 */
#include "variadic_functions.h"
/**
 * sum_them_all - adds up all its arguments
 * @n: number of arguments
 *
 * Return: returns the sum of all its paramters 9arguments)
 * if n is zero, returns 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;
	int result = 0;

	if (n == 0)
		return (0);
	va_start(arglist, n);
	for (i = 0; i < n; i++)
		result += va_arg(arglist, int);
	va_end(arglist);
	return (result);
}
