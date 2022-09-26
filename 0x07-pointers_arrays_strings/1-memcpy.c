#include "main.h"

/**
 * _memcpy - copies n-bytes to memory area
 * @dest: memory area copied to
 * @src: source of copied bytes
 * @n: number of bytes copied
 *
 * Return: returns a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
