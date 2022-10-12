#include "function_pointers.h"

/**
 * array_iterator - executes a function on each member of an array
 * @array: given array
 * @size: size of the array
 * @action: function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)	
		action(array[i]);

}
