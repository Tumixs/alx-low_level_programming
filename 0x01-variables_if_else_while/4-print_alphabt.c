#include <stdlib.h>
#include <time.h>
#include <stdio.h>

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
		putchar(x);
		if (x == 'z')
			break;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
