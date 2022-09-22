#include "main.h"

/**
* _strcmp - compares two strings
* @s1: string
* @s2: string
* Return: returns -15 if s1 < s2, 15 if s1 > s2
* returns 0 if s1 and s2 match.
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == 0)
			return (0);
	}
	return (s1[i] - s2[i]);
}
