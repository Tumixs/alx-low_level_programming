/*Swap the value of two integers*/
#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: integer 1
 * @b: integer 2
 */
void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;
	*a = j;
	*b = i;
}
