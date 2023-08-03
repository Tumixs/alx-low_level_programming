/* Project 0x08: 3-factorial.c
 * Author: Asere Oluwatumise S.
 */
#include "main.h"
/**
 * factorial - calculates the factorial of a number
 * @n: given number
 *
 * Return: returns the calculated factorial
 * if n < 0, returns -1
 * Note: factorial 0 = 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
