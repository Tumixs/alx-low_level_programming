/*
 * File: 100-main_opcodes.c
 * Author: Asere Oluwatumise S.
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program start
 * @argc: no of command-line args
 * @argv: command-line args
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int bytes;
	int count;
	int (*code)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (count = 0; count < bytes; count++)
	{
		printf("%.2x", *(unsigned char *)code);
		if (count == bytes - 1)
			continue;
		printf(" ");
		code++;
	}
	putchar('\n');
	return (0);
}
