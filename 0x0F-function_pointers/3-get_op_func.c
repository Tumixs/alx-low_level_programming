/* Determines the required function */
#include "3-calc.h"
/**
 * get_op_func - gets the required function for the operator
 * @s: operator
 * @a: integer
 * @b: integer
 *
 * Returns: returns the final solution
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
	    {"+", op_add},
	    {"-", op_sub},
	    {"/", op_div},
	    {"*", op_mul},
	    {"%", op_mod},
	    {NULL, NULL},
	};
	int i = 0;

	while (ops[i].op != NULL && *ops[i].op != *s)
		i++;
	return (ops[i].f);
}
