#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: returns 0.
 */
int main(void)
{
	unsigned long int i = 1, j = 2, sum;
	int n;

	printf("%ld, ", i);
	printf("%ld, ", j);
	for (n = 0; n < 47; n++)
	{
		sum = i + j;
		printf("%ld, ", sum);
		i = j;
		j = sum;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
