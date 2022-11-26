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

	while (x != 'Z')
	{
		putchar(x);
		x++;
		if (x > 'z')
		{
			x = 'A';
		}
	}
	putchar(x);
	putchar('\n');
	return (0);
}
