/* Project 0x08: 0-puts_recursion
 * Author: Asere Oluwatumise S.
 */
#include "main.h"
/**
 * _puts_recursion - prints a string followed by a newline
 * @s: Pointer to string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
