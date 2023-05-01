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

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
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
	while (n < len2 && i < (len1 + n))
		con[i++] = s2[j++];
	while (n >= len2 && i < (len1 + len2))
		con[i++] = s2[j++];
	con[i] = '\0';
	return (con);
}
