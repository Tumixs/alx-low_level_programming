#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i;
	int j;
	int step;

	if (size < 1)
		_putchar('\n');
	for (step = 1; step <= size; step++)
	{
		for (j = step; j < size; j++)
			_putchar(' ');
		for (i = 0; i < step; i++)
			_putchar('#');
		_putchar('\n');
	}
}
