#include "main.h"

/**
 * alloc_grid - function that returns pointer to a two dimensionl array
 *
 * @width: the row of the dimensional array
 * @height: the column of the dimensional array
 *
 * Return: pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **ptgrid;
	int i;
	int j;

	if (width <=  0 || height <= 0)
	{
		return (NULL);
	}
	ptgrid = malloc(width * (sizeof(int *)));
	if (ptgrid == 0)
	{
		free(ptgrid);
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		ptgrid[i] = malloc(height * (sizeof(int)));
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			ptgrid[i][j] = 0;
		}
	}
	return (ptgrid);
	for (i = 0; i < height; i++)
	{
		free(ptgrid[i]);
	}
	free(ptgrid);
}

