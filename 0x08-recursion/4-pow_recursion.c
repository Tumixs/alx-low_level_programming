/* Project 0x08: 5-sqrt_recursion.c
 * Author: Asere Oluwatumise S.
 */
#include "main.h"
/**
 * _pow_recursion - finds the value of x raised to the power of y
 * @x: number
 * @y: index (or power)
 *
 * Return: returns the calculated value,
 * if y < 0, returns -1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
