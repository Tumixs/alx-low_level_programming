/*
 * File: 3-array_range.c
 * Author: Asere Oluwatumise S.
 */
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum integer in array
 * @max: maximum integer in array
 *
 * Return: returns a pointer to the allocated and initialised array
 *	   On error, returns NULL
 */
int *array_range(int min, int max)
{
	int *buf;
	int i;

	if (min > max)
		return (NULL);
	buf = malloc((max - min + 1) * (sizeof(int)));
	if (buf == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		buf[i] = min;
	return (buf);
}
