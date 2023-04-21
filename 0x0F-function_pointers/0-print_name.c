#include "main.h"
#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: name to print
 * @f: function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		printf("Error");
	else
		f(name);
}

