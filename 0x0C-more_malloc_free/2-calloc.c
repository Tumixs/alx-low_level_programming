/*
 * File: 2-calloc.c
 * Author: Asere Oluwatumise S.
 */
#include "main.h"
/**
 * _calloc - custom `calloc()`
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: returns a pointer to allocated memory.
 *	   on failure returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *buf;
	unsigned int i;
	char *tmp;

	if (nmemb == 0 || size == 0)
		return (NULL);
	buf = malloc(size * nmemb);
	if (buf == NULL)
		return (NULL);
	tmp = buf;
	for (i = 0; i < (size * nmemb); i++)
		tmp[i] = '\0';
	return (buf);
}
