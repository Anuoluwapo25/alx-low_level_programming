#include "main.h"

/**
 * clear_bit - function that set the value of a bit
 * @n: number
 * @index: index
 *
 * Return: 1 and -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = ~(1UL << index);

	if (index >= 8 * sizeof(unsigned long int))
		return (-1);

	*n = (*n) & bit;
	return (1);
}
