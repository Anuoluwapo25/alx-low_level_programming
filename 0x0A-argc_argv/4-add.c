#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * @argc: argument count
 * @argv: par argv
 *
 * Return: 0 and 1
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;


	if (argc == 1)
	{
		printf("0\n");
	}
	else if (*argv >= 48 && *argv <= 57)
	{
		for (i = 0; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else 
	{
		printf("Error\n");
	}
	return (0);
}
