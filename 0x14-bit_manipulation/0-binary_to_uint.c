#include "main.h"

/**
 * binary_to_uint - function that convert binary.
 *
 * @b: pointer pointer pointing to a string.
 *
 * Return: 0, 1 and NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i;
	char d;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		d = b[i];
		if (d != '0' || d != '1')
			return (0);
		if (d == '1')
		{
			dec <<= 1;
			dec = dec + 1;
		}
		else
			dec <<= 1;
	}
	return (0);
}
