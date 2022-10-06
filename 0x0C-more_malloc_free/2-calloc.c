#include "main.h"

/**
 * _calloc - allocates memory for an array
 * memory is initilaised to zero
 * @nmemb: nnumber of members in array
 * @size: size of each member
 *
 * Return: returns pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *tmp;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	tmp = malloc(nmemb * size);
	if (tmp == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		*((char *)tmp + i) = 0;
	return (tmp);
}
