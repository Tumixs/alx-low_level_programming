/* Project 0x08: 5-sqrt_recursion.c
 * Author: Asere Oluwatumise S.
 */
#include "main.h"
int root_find(int, int);
int _sqrt_recursion(int);
/**
 * root_find - finds the square root of a number
 * @num: number
 * @root: root
 *
 * Return: returns the root of the number,
 * if the root does not exist returns -1.
 */
int root_find(int num, int root)
{
	if (root * root == num)
		return (root);
	if (root == num / 2)
		return (-1);

	return sqrt_find(num, root + 1);
}
/**
 * _sqrt_recursion - finds the natural square root of x
 * @x: integer
 *
 * Return: returns the natural square root,
 * if natural square root doesn't exist, returns -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (sqrt_find(n, 0));
}
