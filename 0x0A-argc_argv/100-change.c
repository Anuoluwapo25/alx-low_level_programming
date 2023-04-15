#include "main.h"

/**
 * main - main function
 *
 * @argc: argument count
 * @argv: pointer array
 *
 * Return: always 0
 *
 */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int cents;
	int result = 0;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && cents >= 0; i++)
	{
		while (cents >= coins[i])
		{
			result++;
			cents -= coins[i];
		}
	}
	
	printf("%d\n", result);
	return (0);
}
