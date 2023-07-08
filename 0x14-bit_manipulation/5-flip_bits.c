#include "main.h"

/**
 * flip_bits -function that flios
 * @n: number
 * @m: flip number
 * Return: i
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	unsigned long int bit;

	i = 0;
	bit = n ^ m;

	while (bit != '\0')
	{
		i += bit & 1;
		bit >>= 1;
	}
	return (i);
}
