#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that create array of chars
 *
 * @size: size of the array
 * @c: character c to be put in the memory allocated
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int count;
	char *array;

	array = malloc(size * (sizeof(char)));
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (count = 0; count < size; count++)
		{
			array[count] = c;
		}
		return (array);
	}
}
