#include "main.h"

/**
* reverse_array -reverses the content of an array of integers
* @a: a pointer to the array of integers that will be reversed
* @n: the number of elements in the array
* Return: returns 0 
*/
void reverse_array(int *a, int n)
{
	int i, j, k;
	k = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[k];
		a[k] = j;
		k--;
	}
}
