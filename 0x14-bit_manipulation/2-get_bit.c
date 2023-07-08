#include "main.h"

/**
 * get_bit - return the value of a bit st index
 *
 * @n: number
 * @index: index to set
 *
 * Return: -1 or index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > 64)
	{
		return (-1);
	}
	i = ((n >> index) & 1);

	return (i);

}
