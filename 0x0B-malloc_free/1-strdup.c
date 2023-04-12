#include "main.h"

/**
 * _strdup - function that copies string into allocated memory
 * @str: string to be copied
 *
 * Return: pointer and NULL
 */

char *_strdup(char *str)
{
	int strlen;
	char *pstri;
	int count;

	if (str == NULL)
	{
		return (NULL);
	}
	for (strlen = 0; str[strlen] != '\0'; strlen++)
	pstri = malloc(strlen * (sizeof(char)) + 1);
	if (pstri == NULL)
	{
		return (NULL);
	}

	for (count = 0; count <= strlen; count++)
	{
		pstri[count] = str[count];
	}
	return (pstri);
}
