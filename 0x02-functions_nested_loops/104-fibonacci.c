#include <stdio.h>
/**
 * main - prints 98 fibonacci numbers
 *
 * Return: returns 0
 */
int main(void)
{
	unsigned long int i = 0, j = 1, sum;
	int n;

	for (n = 0; n < 98; n++)
	{
		sum = i + j;
		printf("%lu", sum);
		if (n != 97)
			printf(", ");
		i = j;
		j = sum;
	}
	printf("\n");
	return (0);
}
