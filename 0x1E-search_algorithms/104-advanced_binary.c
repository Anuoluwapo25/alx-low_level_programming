#include "search_algos.h"

/**
  * advanced_binary_recursive - Searches recursively for a value
  * @array: A pointer to the first element of the [sub]array to search.
  * @left: The starting index of the [sub]array to search.
  * @right: The ending index of the [sub]array to search.
  * @value: The value to search for.
  * Return: If the value is not present, -1.
  */
int advanced_b_rc(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (mid = left; mid < right; mid++)
		printf("%d, ", array[mid]);
	printf("%d\n", array[mid]);

	mid = left + (right - left) / 2;
	if (array[mid] == value && (mid == left || array[mid - 1] != value))
		return (mid);
	if (array[mid] >= value)
		return (advanced_b_rc(array, left, mid, value));
	return (advanced_b_rc(array, mid + 1, right, value));
}

/**
  * advanced_binary - Searches for a value in a sorted array
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  * Return: If the value is not present or the array is NULL, -1.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_b_rc(array, 0, size - 1, value));
}
