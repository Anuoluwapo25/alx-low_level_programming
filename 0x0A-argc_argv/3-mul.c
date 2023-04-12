#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiples two num
 *
 * @argc: argument count
 * @argv: parameters argv
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i = atoi(argv[1]);
	int j = atoi(argv[2]);
	int result;

	if (argc == 3)
	{
		result = i * j;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}


