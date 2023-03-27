#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - function that returns length of a string
 *
 * @s: parameter s
 *
 * Return: the lenght of string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
