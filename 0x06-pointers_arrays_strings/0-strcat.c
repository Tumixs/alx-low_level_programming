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
		j += 1;
	while (src[j])
	{
		dest[j] = *src++;
		j++;
	}
	return (dest);
}
