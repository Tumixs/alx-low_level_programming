/*
 * File: 3-alloc_grid.c
 * Author: Asere Oluwatumise S.
 */
#include "main.h"
/**
 * alloc_grid - creates a 2-dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: Returns a pointer to the 2D array.
 *	   Otherwise on failure returns `NULL`.
 */
int **alloc_grid(int width, int height)
{
	int **buf, i, j;

	if (width < 1 || height < 1)
		return (NULL);
	buf = malloc(sizeof(int *) * height);
	if (buf ==  NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		buf[i] = malloc(sizeof(int) * width);
		if (buf[i] == NULL)
		{
			for (; i >= 0; i--)
				free(buf[i]);
			free(buf);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			buf[i][j] = 0;
	return (buf);
}
