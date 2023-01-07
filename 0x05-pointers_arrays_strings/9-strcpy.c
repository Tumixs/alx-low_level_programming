#include "main.h"
/**
 * _strcpy - copies string between two buffers
 * @src: buffer copied from
 * @dest: buffer copied from
 *
 * Return: returns a pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
