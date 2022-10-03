#include "main.h"

/**
 * str_concat - concatenates two strings to a new memory location
 * @s1: string1
 * @s2: string2
 *
 * Return: returns pointer to new memory loaction containing
 * containing concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	char *tmp;

	if (s1 != NULL)
		while (s1[i])
			i++;
	if (s1 != NULL)
		while (s2[j])
			j++;
	tmp = malloc((i + j) * sizeof(char));
	if (tmp == NULL)
		return (NULL);
	if (s1 != NULL)
		for (; k < (i); k++)
			*(tmp + k) = *(s1 + k);
	if (s2 != NULL)
		for (; k < (i + j); k++, l++)
			*(tmp + k) = *(s2 + l);
	*(tmp + k) = '\0';
	return (tmp);
}
