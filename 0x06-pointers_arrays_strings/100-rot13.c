#include "main.h"

/**
 * rot13 - function that encodes string
 *
 * @n: parameter n
 *
 * Return: n
 */

char *rot13(char *n)
{
	int i;

	for (i = 0 ; n[i] != '\0' ; i++)
	{
		if ((n[i] >= 97 && n[i] <= 122) || (n[i] >= 65 && n[i] <= 90))
			n[i] = n[i] + 13;
		n[i]++;
	}

	return (n);
}
