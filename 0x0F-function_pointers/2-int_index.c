/*
 * File: 2-int_index.c
 * Author: Asere Oluwatumise S.
 */
#include "function_pointers.h"
/**
 * int_index - Searches for an integer
 * @array: array to search from
 * @size: size of array
 * @cmp: pointer to comparison function
 *
 * Return: returns the index of the first element meeting search comparisons
 * if no elements matches, returns 0
 * if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int match;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		match = cmp(array[i]);
		if (match != 0)
			return (i);
	}
	return (-1);
}
