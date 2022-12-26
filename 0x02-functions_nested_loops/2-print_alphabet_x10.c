#include "main.h"
/**
 * print_alphabet_x10 - prints the lowercase alphabet 10x
 */
void print_alphabet_x10(void)
{
	int i = 'a';
	int j = 0;

	while (j < 10)
	{
		for (; i < 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
	_putchar('\n');
}
