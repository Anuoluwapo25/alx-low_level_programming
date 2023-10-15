#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void error_exit(const char *message) {
    fprintf(stderr, "%s\n", message);
    exit(98);
}

void print_elf_header(const char *file_name) {
    int fd;
    Elf64_Ehdr header;

    // Open the ELF file
    if ((fd = open(file_name, O_RDONLY)) == -1) {
        error_exit("Error: Can't open file");
    }

    // Read the ELF header
    if (read(fd, &header, sizeof(Elf64_Ehdr)) == -1) {
        error_exit("Error: Can't read file");
    }

    // Check for the ELF magic number
    if (header.e_ident[EI_MAG0] != ELFMAG0 || 
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3) {
        error_exit("Error: Not an ELF file");
    }

    // Print the ELF header information
    printf("ELF Header:\n");
    printf("  Magic:   %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
           header.e_ident[EI_MAG0], header.e_ident[EI_MAG1], header.e_ident[EI_MAG2], header.e_ident[EI_MAG3],
           header.e_ident[EI_CLASS], header.e_ident[EI_DATA], header.e_ident[EI_VERSION],
           header.e_ident[EI_OSABI], header.e_ident[EI_ABIVERSION],
           header.e_ident[EI_PAD], header.e_ident[EI_PAD], header.e_ident[EI_PAD],
           header.e_ident[EI_PAD], header.e_ident[EI_PAD], header.e_ident[EI_PAD], header.e_ident[EI_PAD]);
    printf("  Class:                             %s\n", header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("  Data:                              %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n", header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
                                                       (header.e_ident[EI_OSABI] == ELFOSABI_NETBSD ? "UNIX - NetBSD" :
                                                       (header.e_ident[EI_OSABI] == ELFOSABI_SOLARIS ? "UNIX - Solaris" :
                                                       "<unknown>")));
    printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
    printf("  Type:                              %d (Executable file)\n", header.e_type);
    printf("  Entry point address:               0x%lx\n", header.e_entry);

    close(fd);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        error_exit("Usage: elf_header elf_filename");
    }

    print_elf_header(argv[1]);

    return 0;
}

