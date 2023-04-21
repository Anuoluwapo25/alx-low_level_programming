#include "variadic_functions.h"

/**
 * print_strings - strings
 *
 * @separator: string s
 * @n: num of string
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list mystr;

	va_start(mystr, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(mystr, char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(mystr);
}
