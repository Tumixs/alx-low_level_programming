/*
 * File: 1-strdup.c
 * Author: Asere Oluwatumise S.
 */
#include "main.h"
/**
 * _strdup - duplicates a string into a newly allocated memory
 * @str: string to duplicate
 *
 * Return: returns a pointer to the duplicate memory;
 *	   Otherwise on failure (i.e str is NULL or not enough memory), returns NULL
 */
char *_strdup(char *str)
{
	char *buf;
	int len;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len]; len++)
		;
	buf = malloc(sizeof(char) * len);
	if (buf == NULL)
		return (NULL);
	for (; len >= 0; len--)
		buf[len] = str[len];
	return (buf);
}
