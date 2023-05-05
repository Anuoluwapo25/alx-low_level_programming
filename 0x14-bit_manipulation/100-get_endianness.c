#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: void
 */

int get_endianness(void)
{
	int num;
	char *p;

	num = 1;
	p = (char *) &num;

	if (*p == 1)
		return (1);
	else
		return (0);
}
