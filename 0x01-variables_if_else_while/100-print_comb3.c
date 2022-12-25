#include <stdio.h>

/**
 * main - program start
 *
 * Return: return 0
 */
int main(void)
{
	int i = '0';
	int k = '0';

	for (; k <= '9'; k++)
	{
		i = k + 1;
		while (i <= '9')
		{
			{
				putchar(k);
				if (i >= i + 1)
					continue;
				else
					putchar(i);
				if ((k + 1) != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
			i++;
		}
		i = '0';
	}
	putchar('\n');
	return (0);
}
