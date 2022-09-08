/* The Program will print the size of various types */
#include <stdio.h>
/**
 * main - the program starts executing from here
 * Return: returns 0
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(l\
									       ong long int));
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(float));
	return (0);
}
