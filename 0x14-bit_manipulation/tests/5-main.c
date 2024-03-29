#include <stdio.h>
#include "../main.h"

/**
 * main - Program start.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int n;

	n = flip_bits(1024, 1);
	printf("%u\n", n);
	n = flip_bits(402, 98);
	printf("%u\n", n);
	n = flip_bits(1024, 3);
	printf("%u\n", n);
	n = flip_bits(1024, 1025);
	printf("%u\n", n);
	n = flip_bits(ULONG_MAX, 0);
	printf("%u\n", n);
	printf("%lu\n", ULONG_MAX);
	return (0);
}
