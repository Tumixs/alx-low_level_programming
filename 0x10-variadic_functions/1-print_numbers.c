#include "variadic_functions.h"

/**
 * print_numbers - prints numbers and a newline
 * @separator: string to be printed betwen numbers
 * @n: number of integers passed to the function
 * Note: if separator is NULL, does not print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;

	if (separator == NULL)
		return;
	if (n == 0)
		return;
	va_start(arglist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arglist, int));
		if (i != (n -1))
			printf("%c ", *separator);
	}
	va_end(arglist);
	putchar('\n');
}
