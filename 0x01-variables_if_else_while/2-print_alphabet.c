#include <stdio.h>
#include "main.h"

/**
 * main - program start
 *
 * Return: returns 0
 */
int main(void)
{
	char x = 'a';

	for (; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
	return (0);
}
