#include "main.h"
/**
 * print_array - prints n elements of an array of integer
 * @a: array
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i = 1;

	if (n < 1)
		return;
	for (; i < n; i++)
	{
		printf("%d, ", *a++);
	}
	printf("%d\n", *a++);
}
