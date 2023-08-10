#include "main.h"
/**
 * puts_half - prints half of a string followed by a newline
 * @str: string
 */
void puts_half(char *str)
{
	int i = 0;
	int j = 0, n;

	for (; str[i]; i++)
		;
	if ((i % 2) == 0)
		n = i / 2;
	else
		n = (i + 1) / 2;
	for (j = n; j < i; j++)
		_putchar(str[j]);

	_putchar('\n');
}
