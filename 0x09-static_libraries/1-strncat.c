#include "main.h"

/**
 * _strncat - function that concatenate two strings
 * * @dest: par src
 * @src: parameter src
 * @n: parameter n
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n)
	{
		dest[i] = src[j];
		if (j == '\0')
		i++;
		j++;
	}

	return (dest);
}
