#include "main.h"

/**
 * islower - function that prints lower case
 *
 * @c: par c
 *
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);
	else
		return (0);
}

