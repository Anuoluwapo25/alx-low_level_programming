#include "main.h"
#include <stdlib.h>
#include <sys/stat.h>

/**
 * main - main function
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Exit
 */

int main(int argc, char *argv[])
{
	FILE *file_from;
	FILE *file_to;
	char buffer[1024];
	size_t r;

	if (argc != 3)
	{
		printf("usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = fopen(argv[1], "r");
	if (file_from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	file_to = fopen(argv[2], "w");
	if (file_to == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	r = fread(buffer, sizeof(char), 1024, file_from);
	fwrite(buffer, sizeof(char), r, file_to);

	if (fclose(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file_from\n");
		return (100);
	}
	if (fclose(file_to))
	{
		dprintf(STDERR_FILENO, "Error: Can't close file_to\n");
		return (100);
	}
	if (chmod(argv[2], 0664) == -1)
		return (1);

	return (0);
}
