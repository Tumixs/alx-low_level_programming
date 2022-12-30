#include "main.h"
/**
 * print_square - prints a square with char #
 * @size: size of square (size * size)
 */
void print_square(int size)
{
	int i;
	int j;

	if (size < 1)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
}
