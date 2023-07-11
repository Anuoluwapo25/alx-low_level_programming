#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * @filename: name of file
 * @letters: number of letters to print
 * Return: 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fdp;
	ssize_t r;
	char *str;

	if (filename == NULL)
		return (0);
	fdp = fopen(filename, "r");
	if (fdp == NULL)
		return (0);
	str = malloc(sizeof(char) * (letters + 1));
	if (str == NULL)
	{
		fclose(fdp);
		return (-1);
	}
	r = fread(str, sizeof(char), letters, fdp);
	write(STDOUT_FILENO, str, r);
	if (r == -1)
	{
		free(str);
		fclose(fdp);
		return (0);
	}
	free(str);
	fclose(fdp);

	return (r);
}
