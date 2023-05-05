#include "main.h"

/**
 * flip_bits - flipped function
 * @n: number
 * @m: num
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n__attribute__((unused)), unsigned long int m__attribute__((unused)));
{
	unsigned int i;
	unsigned long int elu;

	i = 0;
	elu = n ^ m;

	while (elu != 0)
	{
		i += elu & 1;
		elu >>= 1;
	}
	return (i);
}

