#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

void error_exit(int code, const char *message) 
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int main(int argc, char *argv[]);

#endif 
