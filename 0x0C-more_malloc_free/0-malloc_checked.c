#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: size of memory allocted
 *
 * Return: returns a pointer memory
 */
void *malloc_checked(unsigned int b)
{
	int *tmp;

	tmp = malloc(b);
	if (tmp == NULL)
		exit(98);
	return (tmp);
}
