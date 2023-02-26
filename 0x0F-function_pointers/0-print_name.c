/* Project 0x0F: task 0 */
#include "function_pointers.h"
/**
 * print_name - Prints a name
 * @name: name to print
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
