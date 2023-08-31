/*
 * File: 0-binary_to_uint.c
 * Author: Asere Oluwatumise S.
 */
#include "main.h"
/**
 * binary_to_uint - Convert binary to unsigned int
 * @b: String containing binary figure
 *
 * Return: Returns the converted unsigned int,
 *	   if `b` is NULL or `b` contains any character that is not 0 or 1
 */
int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int len, base = 1;

	if (b == NULL)
		return (0);
	for (len = 0; b[len]; len++)
		;
	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);
		n += (b[len] - '0') * base;
		base *= 2;
	}

	return (n);
}
