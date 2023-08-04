/* Project 0x09: 3-mul.c
 * Author: Asere Oluwatumise S.
 */
#include "main.h"
/**
 * main - a program that multiplies two numbers
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the command-line arguments
 * Return: returns 0 (success), otherwise 1 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
