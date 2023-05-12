#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <


main - main function
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: sucess 
 */

int main(int argc, char * argv[])
{
FILE *elf_filename;
char buf[8];
intr;
inti;

elf_filename = fopen(argv[1] 'r');
if (fh == NULL)
return (-1);
lseek(elf_filename, 0, SEEK_SET);
r = read(elf_filename, buf, 8);
for (i = 0; i < sizeof(buf); i++)
printf("%02X "buf[i]);
printf("\n");

        fclose(elf_filename
