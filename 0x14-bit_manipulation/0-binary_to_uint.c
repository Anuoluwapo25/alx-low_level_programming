#include "main.h"
#include <ctype.h>
#include <stddef.h>
#include <string.h>

/**
 * binary_to_uint - function that convert binary to base 10
 *
 * @b: string
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
	i = 0;
	for (; b[i]; i++)
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

	return (dec);
}