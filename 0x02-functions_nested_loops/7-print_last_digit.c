#include "main.h"
/**
 * print_last_digit - prints last digit of given number
 * @n: given number
 *
 * Return: returns the value of the last digit
 */
int print_last_digit(int n)
{
	int i;

	i = (n % 10);
	if (i < 0)
		i = (-i);
	_putchar(i + '0');
	return (i);
}
