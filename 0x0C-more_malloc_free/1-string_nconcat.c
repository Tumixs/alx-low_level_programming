#include "main.h"

/**
 * string_nconcat - concatenates two strings to a new memory
 * @s1: string
 * @s2: string
 *@n: integer
 *
 * Return: returns a pointer to concatenated string, else return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	char *tmp;

	/* Get s1 length */
	while (s1 && s1[len1])
		len1++;
	/* Get s2 length */
	while (s2 && s2[len2])
		len2++;
	/* Acquire memory */
	if (n < len2)
		tmp = malloc(sizeof(char) * (len1 + n + 1));
	else
		tmp = malloc(sizeof(char) * (len1 + len2 + 1));
	/* verify Memory */
	if (tmp == NULL)
		return (NULL);
	/* Copy s1 to tmp */
	while (i < len1)
	{
		tmp[i] = s1[i];
		i++;
	}
	/* Copy n-size from s2 to tmp */
	while (n < len2 && i < (len1 + n))
	{
		tmp[i++] = s2[j++];
	}
	while (n >= len2 && i < (len1 + len2))
		tmp[i++] = s2[j++];
	tmp[i] = '\0';
	return (tmp);
}
