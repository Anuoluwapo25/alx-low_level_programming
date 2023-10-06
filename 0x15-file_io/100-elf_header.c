#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>
#include <elf.h>

void print_elf_header(const Elf64_Ehdr *ehdr);

int main(int argc, char *argv[]) {
    int i;
    Elf64_Ehdr ehdr;
    ssize_t bytes_read;
    const char *elf_filename;
    int fd;
    
    if (argc < 2) {
        fprintf(stderr, "Usage: %s elf_file1 elf_file2 ...\n", argv[0]);
        exit(98);
    }

    for (i = 1; i < argc; i++) {
        elf_filename = argv[i];
        fd = open(elf_filename, O_RDONLY);

        if (fd == -1) {
            perror("Error opening file");
            continue; 
        }

       
	bytes_read = read(fd, &ehdr, sizeof(Elf64_Ehdr));

        if (bytes_read != sizeof(Elf64_Ehdr) || memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0) {
            fprintf(stderr, "%s: Not an ELF file\n", elf_filename);
            close(fd);
            continue;
        }

        printf("ELF Header for: %s\n", elf_filename);
        print_elf_header(&ehdr);
        close(fd);
    }

    return 0;
}

void print_elf_header(const Elf64_Ehdr *ehdr) {
    int i;
    
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", ehdr->e_ident[i]);
    }
    printf("\n");

    printf("  Class:                             ");
    switch (ehdr->e_ident[EI_CLASS]) {
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown>\n");
            break;
    }

    printf("  Data:                              ");
    switch (ehdr->e_ident[EI_DATA]) {
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("<unknown>\n");
            break;
    }

    printf("  Version:                           %u (current)\n", (unsigned int)ehdr->e_ident[EI_VERSION]);

    printf("  OS/ABI:                            ");
    switch (ehdr->e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        case ELFOSABI_LINUX:
            printf("UNIX - Linux\n");
            break;
        default:
            printf("<unknown: %d>\n", ehdr->e_ident[EI_OSABI]);
            break;
    }

    printf("  ABI Version:                       %u\n", (unsigned int)ehdr->e_ident[EI_ABIVERSION]);

    printf("  Type:                              ");
    switch (ehdr->e_type) {
        case ET_NONE:
            printf("NONE (No file type)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        default:
            printf("<unknown: %u>\n", (unsigned int)ehdr->e_type);
            break;
    }

    printf("  Entry point address:               0x%lx\n", (unsigned long)ehdr->e_entry);
}

