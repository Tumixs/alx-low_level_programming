#include "main.h"

/**
* reverse_array - reverses an array of integers
* @a: a pointer to the array of integers that will be reversed
* @n: the number of elements in the array
* Return: returns 0
*/
void reverse_array(int *a, int n)
{
		int i, j, k;
		j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
		j--;
	}
}
