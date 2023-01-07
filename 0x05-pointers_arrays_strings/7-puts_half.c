#include "main.h"
/**
 * puts_half - prints half of a string followed by a newline
 * @str: string
 */
void puts_half(char *str)
{
	int i = 0;
	int j;
	int index = 0;

	while (*str++)
		i++;
	printf("%d\n", i);
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;
	printf("%d\n", j);
	for (index = j; index < i; index++)
		_putchar(str[index]);
	_putchar('\n');
}
