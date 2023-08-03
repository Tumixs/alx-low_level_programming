/* Project 0x08: 1-print_rev_recursion
 * Author: Asere Oluwatumise S.
 */
#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to string.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
