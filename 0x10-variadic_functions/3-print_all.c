#include "variadic_functions.h"

/**
 * print_all - function that print
 *
 * @char: character
 * @format: types of argument
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list arg;
	char *mypar, *sep = "";

	va_start(arg, format);

	if (format)
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(arg, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(arg, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(arg, double));
				break;
			case 's':
				mypar = va_arg(arg, char *);
				if (!mypar)
					mypar = "(nil)";
				else
					printf("%s%s", sep, mypar);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(arg);
}
