#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: length of diagonal
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n < 1)
		_putchar('\n');
	for (j = 1; j <= n; j++)
	{
		for (i = 1; i < j; i++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
