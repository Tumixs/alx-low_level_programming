/*
 * File: 0-malloc_checked.c
 * Author: Asere Oluwatumise S.
 */
#include "main.h"
/**
 * malloc_checked - allocates memory of size `b`.
 * @b: size of memory to allocate.
 *
 * Return: Returns a pointer to the allocated memory, pointer is of type `void`
 *	   On failure returns NULL.
 */
void *malloc_checked(unsigned int b)
{
	void *buf;

	buf = malloc(b);
	if (buf == NULL)
		return (NULL);
	return (buf);
}
