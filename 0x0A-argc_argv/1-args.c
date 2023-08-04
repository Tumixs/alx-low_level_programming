/* Project 0x09: 1-args.c
 * Author: Asere Oluwatumise S.
 */
#include "main.h"

/**
 * main - program start
 * @argc: number of commandline arguments
 * @argv: array of character pointer to commandline arguments.
 *
 * Return: returns 0
 */
int main(int argc, char *argv[] UNUSED)
{
	printf("%d\n", argc - 1);
	return (0);
}
