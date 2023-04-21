#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - function that prints opcodes
 * @start: argument
 * @size: argument
 * Return: void
 *
 */

void print_opcodes(char *start, int size)
{
	int j;
	for (j = 0; j < size; j++)
	{
		printf("02x", start[i] & 0xff);
	}
	printf("\n");
	void print_opcodes(char *start, int size)
	int main(int argc, char *argv[])
	{
		if (argc != 2)
		{
			printf("Error\n");
			return 1;
		}
		size = atoi(argv[1]);
		if (size <= 0)
		{
			printf("Error\n");
			return (2);
		}

		char *start = (char *) &main;
		print_opcodes(start, size);
	}
	return (0);
}
