#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *elf_file;
    char buf[8];

    // Open the ELF file
    elf_file = fopen(argv[1], "r");
    if (elf_file == NULL) {
        printf("Failed to open the ELF file.\n");
        return -1;
    }

    // Read the ELF header
    fseek(elf_file, 0, SEEK_SET);
    fread(buf, sizeof(char), 8, elf_file);

    // Print the contents of the ELF header
    for (int i = 0; i < 8; i++) {
        printf("%02X ", buf[i]);
    }
    printf("\n");

    // Close the ELF file
    fclose(elf_file);

    return 0;
}

