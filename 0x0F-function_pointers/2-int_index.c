#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search through
 * @size: size of array
 * @cmp: pointer to function
 *
 * Description: the pointed function compares
 * each elements of the given array until a match is
 * found.
 * Return: returns the index of the first matching element of the array
 * if no match occurs retuns -1
 * if size is less than or equal to zero returns -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (cmp == NULL)
		return (-1);
	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);
		if (j != 0)
			return (i);
	}
	return (-1);
}
