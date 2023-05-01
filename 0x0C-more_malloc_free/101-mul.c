#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * multipy - fuction
 * @num1: no
 * @num2: no2
 * Return: sucess
 */

int multiply(int num1, int num2)
{
	return (num1 * num2);
}


/**
 * main - main functio
 * @argc: argument count
 * @argv[]: argument 
 * Return: 98
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	int n;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	for (n = 0; n < argc; n++)
	{
		for (i = 0; argv[n][i] != '\0'; i++)
		{
			if (isdigit(argv[n][i]))
			{
				printf("Error\n");
				return (98);
			}
		}
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = multiply(num1, num2);
	printf("%d\n", result);

	return (0);
}
