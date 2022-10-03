#include "main.h"

/**
 * create_array - creates an array of chars
 * @c: used to initilaize array
 * @size: size of array
 *
 * Return: returns a pointer to the initialised array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;
	
	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (arr != NULL)
	{
		while (i < size * sizeof(char))
		{
			*(arr + i) = c;
			i++;
		}
		return (arr);
	}
	return (NULL);
}

