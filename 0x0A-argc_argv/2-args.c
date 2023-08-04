/*
 * Project 0x09: 2-args.c
 * Author: Asere Oluwatumise S.
 */
#include "main.h"
/**
 * main - program start
 * @argc: number of commandline arguments
 * @argv: array of characater pointer to commandline argument.
 *
 * Return: returns 0
 */
int main(int UNUSED argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
