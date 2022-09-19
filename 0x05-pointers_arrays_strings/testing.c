#include <stdio.h>
#include <stdlib.h>
/**
 * swap_int - swaps the values of two integers
 * @a: integer 1
 * @b: integer 2
 */
void swap_int(int *a, int *b)
{
	int c, d;
	
	c = *a;
	d = *b;
	*a = d;
	*b = c;
	printf("*a=%p\n",a);
	printf("c=%d,d=%d\n\n", c, d);
}
/**
 * main - program start
 * Return: returns 0
 */
int main(void)
{
	int a, b;

	a = 98;
	b = 42;
	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}
