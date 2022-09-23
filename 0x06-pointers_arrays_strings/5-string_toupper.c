#include <stdio.h>
#include "main.h"

/**
* string_toupper -   changes all lowercase letters of a string to uppercase
* @s: a pointer to the string.
*
* Return: returns a pointer
*/
char *string_toupper(char *s)
{
	int i;
	int j = 0;

	for (i = 0; s[i] != 0; i++)
		j++;
	for (i = 0; i < j; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}
	return (s);
}
