#include "main.h"

/**
 * flip_bits - function that flips 
 *
 * @n: number
 * @m: flip num
 *
 * Return: 0.
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
