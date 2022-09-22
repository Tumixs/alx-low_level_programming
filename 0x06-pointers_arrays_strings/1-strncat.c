#include "main.h"
/**
 * _strncat - concatenates two strings use at most n bytes
 * @dest: string
 * @src: string
 * @n: limit of concatenation
 *
 * Return: returns a pointer to he string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;
	while (src[i] && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
