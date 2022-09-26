#include "main.h"
/* The Function filss memory with a constant byte */
/**
 * _memset - fills memory with constant byte
 * @s: array
 * @b: value to put in memory address
 * @n: number of memory address
 *
 * Return: returns a pointer to the memory address
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
