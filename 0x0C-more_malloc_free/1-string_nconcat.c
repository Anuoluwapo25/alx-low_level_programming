#include "main.h"

/**
 * string_nconcat - function that concatenate string
 *
 * @s1: string 1
 * @s2: string 2 to be concatenated
 * @n: size
 *
 * Return: pointer, NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con;
	unsigned int i;
	unsigned int j;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 != NULL)
	{
		for (i = 0; *s1 != '\0'; i++)
			s1++;
	}
	if (s2 != NULL)
	{
		for (j = 0; *s2 != '\0'; j++)
			s2++;
	}
	if (n < len2)
	{
		con = malloc(sizeof(char) * (len1 + n + 1));
	}
	else
		con = malloc(sizeof(char) * (len1 + len2 + 1));
	if (con == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		con[i] = s1[i];
	}
	j = 0;
	for (j = 0; j < n && *s2 != '\0'; i++, j++)
	{
		con[i] = s2[j];
	}
	con[i] = '\0';
	return (con);
}
