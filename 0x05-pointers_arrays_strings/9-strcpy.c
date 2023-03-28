#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - function that orint the string pointed to
 *
 * @dest: parameter
 * @src: parameter
 *
 * Return: always 0
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}


