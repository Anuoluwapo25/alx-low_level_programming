#include "main.h"
/**
 * argstostr - function tgat concatenate argument
 *
 * @ac: argument count
 * @av: array of strin
 *
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	char *ptstr;
	int i, j;
	int len = 0;
	int r = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len += ac;
	ptstr = malloc(len * (sizeof(char)) + 1);
	if (ptstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptstr[r] = av[i][j];
			r++;
		}
		if (*ptstr == '\0')
		{
			ptstr[r++] = '\n';
		}
	}
	return (ptstr);
}
