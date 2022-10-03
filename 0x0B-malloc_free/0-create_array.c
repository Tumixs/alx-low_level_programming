#include "main.h"

/**
 * create_array - creates an array of chars
 * @c: used to initilaize array
 * @size: size of array
 */
char *create_array(unsigned int size, char c)
{
	char *arr = &c;

	arr = malloc(size);
	if (arr == NULL)
		return (" ");
	return (arr);
}

