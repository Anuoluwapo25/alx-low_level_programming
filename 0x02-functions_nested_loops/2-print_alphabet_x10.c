#include "main.h"

/**
 * print_alphabet10 - function that print alphabet x10
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(i);
		_putchar('\n');
	}
}
