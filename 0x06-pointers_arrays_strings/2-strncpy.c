#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function that copies 2 string
 *
 * @dest: parameter dest
 * @src: parameter src
 * @n: parameter n
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
			i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

