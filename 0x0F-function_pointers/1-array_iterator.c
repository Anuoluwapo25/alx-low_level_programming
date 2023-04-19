#include "main.h"
#include "function_pointers.h"

/**
 * array_iterator - function that excecute a function
 *
 * @array: array
 * @size: size of array
 * 
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
