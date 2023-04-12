#include "main.h"

/**
 * free_grid - function that free an allocated memory space
 *
 * @grid: parameter grid
 * @height: parameter height
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

