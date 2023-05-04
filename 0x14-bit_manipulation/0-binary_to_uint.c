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
	int len;
	int base = 1;
	int i;

	len = strlen(b);
	for (i = (len - 1); i >= 0; i--)
	{
		if (!isdigit(b) || b == NULL)
		       return (0);
		else if (b[i] == '1')
		{
			dec += base;
			base *= 2;
		}
	}
	return (dec);
}
