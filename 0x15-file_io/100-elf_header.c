#include <stdio.h>
#include <unistd.h>
#include <

/**
 * main - main function
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: sucess 
 */
int main(int argc, char *argv[]) 
{
	FILE *elf_filename;
	int r;

	if (argc != 2) 
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exist(1);
	}
	elf_filename = fopen(argv[1], "rb");
	if (elf_file == NULL)
	{
		perror("fopen");
		exit(98);
	}
	r = lseek(elf_filename, 0, SEEK_SET);
	if (r == -1) 
	{
		perror("lseek");
		exit(1);
	}
	r = read(fileno(elf_filename,  sizeof(elf_header)));
	if (r == -1)
	{
		perror("read");
		exit(1);
	}
	if (elf_header.e_ident[0] != 0x7F || elf_header.e_ident[1] != 'E' || elf_header.e_ident[2] != 'L' || elf_header.e_ident[3] != 'F')
	{
		fprintf(stderr, "Not an ELF file\n");
		exit(98);
	}
	printf("Magic: 0x%x\n", elf_header.e_ident[4] << 24 |
                                 elf_header.e_ident[5] << 16 |
                                 elf_header.e_ident[6] << 8 |
                                 elf_header.e_ident[7]);
	printf("Class: %d\n", elf_header.e_class);
	printf("Data: %d\n", elf_header.e_data);
	printf("Version: %d\n", elf_header.e_version);
	printf("OS/ABI: %d\n", elf_header.e_osabi);
	printf("ABI Version: %d\n", elf_header.e_abiversion);
	printf("Type: %d\n", elf_header.e_type);
	
	fclose(elf_file);
	return 0;
}



