#include "3-calc.h"

/**
 * main - simple calculator
 * @argc: counts the number of arguments
 * @argv: a charcater array conatainning the arguments passed
 *
 * Return:returns 0 on success
 * returns NULL on failure
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((get_op_func(argv[2])) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%')
			&& num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func((argv[2]))(num1, num2);
	printf("%d\n", result);
	return (0);
}
