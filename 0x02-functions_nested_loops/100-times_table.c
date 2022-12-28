#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: integer
 */
void print_times_table(int n)
{
	int i, j, prod, hund, ten, unit;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			prod = i * j;
			hund = prod / 100;
			ten = prod / 10;
			unit = prod % 10;
			if (prod > 99)
			{
				_putchar(hund + '0');
				_putchar(ten % 10 + '0');
				_putchar(unit + '0');
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (prod > 9)
			{
				_putchar(ten + '0');
				_putchar(unit + '0');
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(unit + '0');
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
