#include <stdio.h>
#include "main.h"

/**
 * _puts - function that print string
 *
 * @str: parameter str
 *
 * Return: Always 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

