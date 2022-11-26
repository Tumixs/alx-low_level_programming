#include "main.h"

/**
 * main - program start
 *
 * Return: returns 0
 */
int main(void)
{
	char x = 'a';

	while (1)
	{
		if ((x == 'e') || (x == 'q'))
		{
			x++;
			continue;
		}
		{
		_putchar(x);
		if (x == 'z')
			break;
		}
		x++;
	}
	_putchar('\n');
	return (0);
}
