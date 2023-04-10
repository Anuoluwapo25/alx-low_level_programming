#include "main.h"

/**
 * _abs - function that prints abolute path
 *
 * @n: parameter to ne checked
 *
 * Return: n
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = -(n);
	}
	else if (n >= 0)
	{
		n = n;
	}
	return (n);
}
