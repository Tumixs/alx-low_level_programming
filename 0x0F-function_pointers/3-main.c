/*
 * File: 3-main.c
 * Author: Asere Oluwatumise S.
 * Simple calculator
 */
#include "3-calc.h"
/**
 * main - program start
 * @argc: number of args
 * @argv: array of args
 *
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	operation calc;
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if ((num2 == 0 && *op == '/') || (num2 == 0 && *op == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	calc = get_op_func(argv[2]);
	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", calc(num1, num2));
	return (0);
}
