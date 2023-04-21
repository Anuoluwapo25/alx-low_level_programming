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
	char *mypar;
	char *sep = ", ";
	va_start(arg, format);
	while (format[i] != '\0' && format != NULL)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				break;
			case 'i':
				printf("%d", va_arg(arg, int));
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				break;
			case 's':
				mypar = va_arg(arg, char *);
				if (mypar == NULL)
				{
					mypar = "(nil)";
						printf("%s", mypar);
				}
				break;
			default:
				break;
				if ((format[i + 1] != '\0') && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
				{
					printf("%s", sep);
				}
				i++;
				printf("\n");
				va_end(arg);

		}
	}
}
