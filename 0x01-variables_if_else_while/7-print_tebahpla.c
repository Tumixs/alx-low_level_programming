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
	char x = 'z';

	for (; x >= 'a'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
