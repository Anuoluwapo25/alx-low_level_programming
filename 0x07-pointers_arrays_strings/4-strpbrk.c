#include "main.h"

/**
 * _strpbrk - function that serches for a string
 *
 * @s: parameter s
 * @accept: parameter accept
 *
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != accept[i])
		{
			return (0);
		}
	}
	{
		if (s[i] == accept[i])
		{
			return (s);
		}
	}
	return (0);
}

