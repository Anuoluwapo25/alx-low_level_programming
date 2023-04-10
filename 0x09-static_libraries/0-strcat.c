#include "main.h"

/**
 * _strcat - function that appends two string
 *
 * @dest: par dest
 * @src: par src
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0; destlen != '\0'; i++)
		destlen++;
	for (i = 0; srclen != '\0'; i++)
		srclen++;
	for (i = 0; i <= srclen; i++)
		dest[destlen + i] = src[i];
	return (dest);
}

