#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

/**
 * create_file - finction that creates afile
 *
 * @filename: name of file
 * @text_content: text context
 *
 * Return: 1 and -1 on sucess
 */

int create_file(const char *filename, char *text_content)
{
	FILE *fh;

	if (filename == NULL)
		return (-1);
	fh = fopen(filename, "w");
	if (fh == NULL)
	{
		return (-1);
	}
	if (text_content == NULL || *text_content == '\0')
	{
		fclose(fh);
		return (1);
	}
	fwrite(text_content, sizeof(char), strlen(text_content), fh);
	fclose(fh);

	if (chmod(filename, 0600) == -1)
		return (-1);

	return (1);
}
