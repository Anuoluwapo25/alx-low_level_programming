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

	if (width <=  0 || height <= 0)
		return (NULL);
	ptgrid = malloc(width * (sizeof(int *)));
	if (ptgrid == 0)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		ptgrid[i] = malloc(height * (sizeof(int)));
	}
	return (ptgrid);
}


