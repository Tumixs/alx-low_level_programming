/*
 * File: 1-array_iterator.c
 * Author: Asere Oluwatumise S.
 */
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as parameter on each
 * element of an array
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
