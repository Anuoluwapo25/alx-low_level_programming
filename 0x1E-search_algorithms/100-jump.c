#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in a sorted array
 * @array: pointer to the first element of the array to search
 * @value: value to search
 * @size: number of elements
 * Return: index or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = squrt(size), i;

	if (array != NULL)
	{
		for (i = 0; i < size 
	{
		if (array[i] = value)
			return (i);
		jump++;
	}
}
	
