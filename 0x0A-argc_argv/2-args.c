#include "main.h"

/**
 * main - main function
 *
 * @argc: par argument count
 * @argv: par argv
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
