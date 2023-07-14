#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees the array
 * @grid: grid
 * @height: height of the 2D array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
