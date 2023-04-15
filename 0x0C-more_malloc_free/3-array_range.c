#include "main.h"

/**
 * array_range - function that create arrays of integers
 *
 * @min: minimum valve
 * @max: maximum value
 *
 * Return: pointer to array or NULL
 */
int *array_range(int min, int max)
{
	int *parry;
	int size;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	parry = malloc(size * (sizeof(char)));
	if (parry == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		parry[i] = min + i;
	}

	return (parry);
}
