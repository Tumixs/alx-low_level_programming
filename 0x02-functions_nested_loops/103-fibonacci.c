#include <stdio.h>
/**
 * main - computes the sum of even fibonacci sequence not greater than 4m
 *
 * Return: return 0
 */
int main(void)
{
	unsigned long int i = 0, j = 1, sum = 0, n;

	while (1)
	{
		n = i + j;
		if (n > 4000000)
			break;
		if (n % 2 == 0)
			sum += n;
		i = j;
		j = n;
	}
	printf("%lu\n", sum);
	return (0);
}
