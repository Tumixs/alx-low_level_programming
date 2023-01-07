/* Find the length of string */
#include "main.h"
/**
 * _strlen - determines the length of string
 * @s: pointer to string
 *
 * Return: returns length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;

	return (i);
}
