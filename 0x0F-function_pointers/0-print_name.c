/*
 * File: 0-print_name.c
 * Author: Asere Oluwatumise S.
 */
#include "function_pointers.h"
/**
 * print_name - Prints a name
 * @name: name to print
 * @f: printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
