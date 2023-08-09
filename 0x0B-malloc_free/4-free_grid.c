/*
 * File: 4-free_grid.c
 * AUthor: Asere Oluwatumise S.
 */
#include "main.h"
/**
 * free_grid - frees a 2-dimensional integer array
 * @grid: pointer to array
 * @height: height of array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
