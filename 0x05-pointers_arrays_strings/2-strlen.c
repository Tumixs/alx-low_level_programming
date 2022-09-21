#include "main.h"
/**
 * _strlen - find the length of a string
 * @s: string
 *
 *  Return: returns j
 */
int _strlen(char *s)
{
	int i;
	int j = 0;

	for (i = 0; s[i]; i++)
		j = i + 1;
		return (j);
}
