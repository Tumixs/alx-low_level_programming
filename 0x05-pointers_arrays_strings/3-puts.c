#include "main.h"
/**
 * _puts - prints a string followed by anewline to the standard output
 * @str: pointer to string
 */
void _puts(char *str)
{
	if (str == NULL)
		return;
	while (*str)
	{
		_putchar(*str);
		++str;
	}
	_putchar('\n');
}
