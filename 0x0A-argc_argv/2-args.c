#include "main.h"

/**
 * main - program start
 * @argc: number of commandline arguments
 * @argv: array of pointer characater pointer to commanline argument.
 *
 * Return: returns 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
