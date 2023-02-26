/* Project 0x0E: Task 1 */
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as parameter on each element of an array
 * @size: size of the array
 * @action: pointer to function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
