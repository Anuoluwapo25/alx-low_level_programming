#include "search_algos.h"
/**
 * interpolation_search -  searches for a value in a sorted array of int
 * @array: pointer to the first element in array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	low = 0;
	high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		pos = low + ((double)(high - low) /
				(array[high] - array[low]) * (value - array[low]));
		if (pos > size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		else
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
