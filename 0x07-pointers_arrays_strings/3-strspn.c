#include "main.h"

/**
 * _strspn - function that finds the matching length of two string
 *
 * @s: par
 * @accept: par2
 *
 * Return: return s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	int len1 = 0;
	int len2 = 0;

	while (len1 != '\0')
		len1++;
	while (len2 != '\0')
		len2++;

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (accept[j] == s[i])
				break;
		}
	}
	return (i);
}
