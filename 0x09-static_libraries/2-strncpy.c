#include "main.h"

/**
 * _strncpy - finction that copies 2 strings
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

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

