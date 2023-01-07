#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a newline.
 * @s: pointer to string to reverse
 */
void print_rev(char *s)
{
	int i = 0;

	if (s == NULL)
		return;
	while (s[i] != '\0')
		i++;
	i -= 1;
	for (; s[i]; i--)
		_putchar(s[i]);

	_putchar('\n');
}
