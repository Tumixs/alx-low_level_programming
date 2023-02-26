#ifndef CALC_H
#define CALC_H

/**
 * struct op - struct op
 * @op: operator
 * @f: operator function
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

typedef int (*operation)(int, int);

#include <stdio.h>
#include <stdlib.h>
int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int, int);

#endif
