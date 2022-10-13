#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a newline
 * @n: number of strings passed to function
 * @separator: string printed between the strings
 *
 * Note: if separator is NULL, will not print
 * if one of the string is NULL, prints (nil)
 * if n is zero, does not print.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;

	if (n == 0)
		return;
	if (separator == NULL)
		return;
	va_start(arglist, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(arglist, char*));
		if (i != (n -1))
			printf("%c ", *separator);
	}
	va_end(arglist);
	putchar('\n');
}
