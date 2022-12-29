#include "main.h"
/**
 * print_line - draws a straightline in the terminal
 * @n: length of line drawn
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			continue;
		_putchar('_');
	}
	_putchar('\n');
}
