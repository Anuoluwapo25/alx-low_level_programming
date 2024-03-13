#include "search_algos.h"

/**
 * linear_search - funtion that searches for a value in an array of integers.
 * @array: pointer to the first element
 * @size: number of elements in array
 * @value: value to search
 * Return: first index
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
