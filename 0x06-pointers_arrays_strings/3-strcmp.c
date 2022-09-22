#include "main.h"
/**
 * _strcmp - compares two string
 * @s1: string
 * @s2: string
 *
 * Return: returns 15 if s1>s2, -15 if s1<s2, 0 if s1 ==s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	if (i > j)
		return (15);
	if (i < j)
		return (-15);
	else
		return (0);
}
