#include <stdio.h>
/**
 * main - program starts
 *
 * Return: return 0.
 */
int main(void)
{
	int i = '0';
	int j = '0';
	int k = '0';

	for (; i <= '9'; i++)
	{
		j = i + 1;
		while (j <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if ((i + 2) != '9')
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			k = 0;
			j++;
		}
		j = 0;
		k = 0;
	}
	putchar('\n');
	return (0);
}
