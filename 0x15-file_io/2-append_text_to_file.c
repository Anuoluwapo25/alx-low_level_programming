#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * append_text_to_file - function to append
 *
 * @filename: name of file
 * @text_content: NULL terminating character
 *
 * Return: 1 and -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fh;

	if (filename == NULL)
		return (-1);
	fh = fopen(filename, "a");
	if (fh == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fclose(fh);
		return (1);
	}
	fprintf(fh, "%s", text_content);

	fclose(fh);
	return (1);
}
