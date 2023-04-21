#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 *
 * @n: number of integers passed
 * @separator: satring sepaerator
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list mynum;
	unsigned int i;

	va_start(mynum, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(mynum, int));
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(mynum);
}
