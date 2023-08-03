/* Project 0x08: 2-strlen_recursion
 * Author: Asere Oluwatumise S.
 */
#include "main.h"
/**
 * _strlen_recursion - finds the lenght of a string
 * @s:pointer to string
 *
 * Return:returns the length of the string (int)
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
		return (0);
	n++;
	n += _strlen_recursion(s + 1);

	return (n);
}
