#include "search_algos.h"
/**
 * binary_search -  function that searches for a value in a sorted array`
 * @array: pointer to first element
 * @size:  number of array
 * @value: value to search
 * Return: index or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int l = 0;
	int r = size - 1;
	int mid, i;

	if (array != NULL)
	{
		while (l <= r)
		{
			mid = (l + r) / 2;
			printf("Searching in array: ");
			for (i = l; i <= r; i++)
			{
				printf("%d", array[i]);
				if (i != r)
					printf(", ");
			}
			printf("\n");
			if (array[mid] ==  value)
				return mid;
			else if (array[mid] < value)
			{
				l = mid + 1;
			}
			else
				r = mid - 1;
		}
	}

	return (-1);
}
