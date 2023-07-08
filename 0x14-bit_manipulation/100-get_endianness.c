#include "main.h"

/**
 * get_endianness - function that check endiannes
 * Return: 0 if big endian, 1 if little endian.
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
