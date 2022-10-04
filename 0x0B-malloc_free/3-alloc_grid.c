#include "main.h"

/**
 * alloc_grid - initializes a 2d-array
 * @width: width of array
 * @height: height of array
 *
 * Return: returns a pointer to the 2d-array
 * on failure, returns NULL
 * if width or height is zero, returns NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int *tmp;
	int i, j;

	grid = malloc((width * height) * sizeof(int) + sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	if (width <= 0 || height <= 0)
		return (NULL);
	tmp = (int *)(grid + height);
	for (i = 0; i < height; i++)
		grid[i] = (tmp + width * i);
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	return (grid);
}
