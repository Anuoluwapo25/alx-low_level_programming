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
	int j;
	int sum = 0;
	int num;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
		for (j = 0; argv[i][j] != '\0'; j++)
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");

				return (1);
			}
	num = atoi(argv[i]);
	if (num <= 0)
	{
		printf("Error\n");

		return (1);
	}
	sum += num;

	printf("%d\n", sum);

	return (0);
}
