/*
 * 0-create_array.c
 * Asere Oluwatumise S.
 */
#include "main.h"
/**
 * create_array - creates an array of chars of length`size` and initialize to c
 * @size: size of array
 * @c: initialiazing character
 *
 * Return: returns char pointer to an array of length `size`,
 *	   Otherwise, on failure returns `NULL`
 */
char *create_array(unsigned int size, char c)
{
	char *buf;

	buf = malloc(sizeof(char) * size);
	if (buf == NULL)
		return (NULL);
	for (; size > 0; size--)
		buf[size] = c;
	buf[size] = c;
	return (buf);
}
