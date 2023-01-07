#include "main.h"
/**
 * puts2 - prints even characters of a character
 * @str: pointer to string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (i % 2 != 0)
			continue;
		_putchar(str[i]);
	}
	_putchar('\n');
}
