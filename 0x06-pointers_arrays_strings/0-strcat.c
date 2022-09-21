#include "main.h"
/**
 *  _strcat - concatenates two strings
 *  @dest: initial string
 *  @src: appended string
 *  Return: returns a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j = 0;

	for (i = 0; dest[i]; i++)
		j = i + 1;
	for (j; src[j] != '\0'; j++)
		dest[j] = *src++;
	return (dest);
}
