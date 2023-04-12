#include "main.h"

/**
 * str_concat - function that concacenate
 *
 * @s1: parameter 1
 * @s2: parameter 2
 *
 * Return: pointer to string and NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *strcat;
	int index;
	int index2;
	int count;
	int count2;

	if (s1 != NULL)
	{
		count = strlen(s1);
	}
	if (s2 != NULL)
	{
		count2 = strlen(s2);
	}
	strcat = malloc((count + count2) * (sizeof(char)) + 1);
	if (strcat == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < count; index++)
	{
		strcat[index] = s1[index];
	}
	for (index2 = 0; index2 < count2; index2++)
	{
		strcat[index + index2] = s2[index2];
	}
	strcat[index + index2] = '\0';

	return (strcat);
}
