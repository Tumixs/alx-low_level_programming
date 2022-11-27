#include <stdio.h>

/**
 * main - program start
 *
 * Return: returns 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	i = 'a';
		for (; i <= 'f'; i++)
			putchar(i);
		putchar('\n');
	return (0);
}
