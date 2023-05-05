#include "main.h"

/**
 * get_bit - function that et at index
 * @n: number
 * @index: index of number
 * Return: bit at idex or -1
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
