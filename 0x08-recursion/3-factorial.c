#include "main.h"

/**
 * factorial - main fuction
 * @n: number
 * Return: -1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
