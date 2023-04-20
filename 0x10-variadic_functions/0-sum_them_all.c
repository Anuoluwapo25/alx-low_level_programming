#include "variadic_functions.h"

/**
 * sum_them_all - function that sum all parameters
 *
 * @n: parameter
 *
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list mypar;
	unsigned int i;
	int result = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(mypar, n);
	for (i = 0; i < n; i++)
	{
		result = result + va_arg(mypar, int);
	}
	va_end(mypar);
	return (result);
}

