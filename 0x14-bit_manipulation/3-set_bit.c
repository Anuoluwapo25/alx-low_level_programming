#include "main.h"

/**
 * set_bit - function that set bit to 1
 * @n: nuber
 * @index: index to set
 * Return: 1 and -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
