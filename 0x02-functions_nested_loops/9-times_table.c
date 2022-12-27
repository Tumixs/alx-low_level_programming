#include "main.h"
/**
 * times_table - prints the 9 times table from 0.
 */
void times_table(void)
{
	int i;
	int j;
	int unit; /* The unit digit of product i.e n * (10 ^ 0)*/
	int tens; /* The tenth digit of product i.e n *(10 ^ 1)*/
	/**
	 * example: 45 = 4 * (10 ^ 1) + 5 * (10 ^ 0)
	 * 4 is the tens, 5 is the unit
	 */
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			tens = i * j / 10;
			unit = i * j % 10;
			if (tens != 0)
				_putchar(tens + '0');
			else if (j != 0)
				_putchar(' ');
			_putchar(unit + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
