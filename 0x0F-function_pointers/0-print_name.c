#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function to use in printing name
 *
 * Description: The function takes two arguments
 * a name and a pointer to a function.
 * it prints the  name with the function pointed to
 * Return: returns nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
