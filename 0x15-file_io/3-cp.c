#include "main.h"

/**
 * main - main function
 * @argc: argument count 
 * @argv: argument vector
 * Return: -1, 1 and 0
 */

int main(int argc, char *argv[])
{
	FILE *file_from;
	FILE *file_to;
	char buffer[1024];
	size_t r;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = fopen(argv[1], "rb");
	if (file_from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[2]);
		exit(99);
	}
	r = fread(buffer, sizeof(char), 1024, file_from);
	fwrite(buffer, sizeof(char), r, file_to);

	if (fclose(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file_to\n");
		return (100);
	}
	if (chmod(argv[2], 0664) == -1)
		return (1);

	return (0);
}
