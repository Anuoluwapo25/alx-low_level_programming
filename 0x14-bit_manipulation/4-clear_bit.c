#include "main.h"

/**
 * clear_bit - set value of bit at 0
 * @n: number
 * @index: index
 * Return: 1 and -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}

