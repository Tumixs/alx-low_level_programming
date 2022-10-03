#include "main.h"

/**
 * _strdup - copies a string to a new memory location
 * @str: poninter to string to copy
 *
 * Return: returns a pointer to the new memory location
 */
char *_strdup(char *str)
{
	int i;
	unsigned long int j;
	char *tmp;

	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (*(str + i) != '\0')
		i++;
	tmp = malloc(i * sizeof(char));
	while (j < i * sizeof(char))
	{
		*(tmp + j) = *(str + j);
		j++;
	}
	return (tmp);
}
