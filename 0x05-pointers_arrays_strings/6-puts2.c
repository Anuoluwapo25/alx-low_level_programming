#include "main.h"

/**
 * puts2 - print every other character
 *
 * @str: parameter str
 *
 * Return: always 0
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0' ; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}

