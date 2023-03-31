#include "main.h"

/**
 * string_toupper - function that capitalises lowercas
 * @n: parameter
 * Return: n
 */

char *string_toupper(char *n)
{
	int i;

	for (i = 98 ; n[i] != '\0' ; i++)
	{
		if (n[i] >= 98 && n[i] <= 122)
			n[i] = n[i] - 32;
	}
	return (n);
}

