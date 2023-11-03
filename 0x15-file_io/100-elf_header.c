#include <stdio.h>
#include <elf.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_ver(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 *check_elf - check if file is elf file
 *@e_ident: pointer to an array for elf numbers
 *
 *Return: return 0.
 */
void check_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4 ; index++)
	{
		if (e_ident[index] != 127 &&
			e_ident[index] != 'E' && 
			e_ident[index] != 'L' && 
			e_ident[index] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}
	}
}
/**
 *print_magic - print the magic number of an elf header
 *@e_ident: pointer to an array for elf number
 *
 *Return: return 0.
 */
void print_magic(unsigned char *e_ident)
{
	int index;

	printf(" Magic: ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 *print_class - prints class of elf header
 *@e_ident: parameter pointing to an elf class
 *
 *Return: return 0.
 */
void print_class(unsigned char *e_ident)
{
	printf(" Class:     ");
		switch (e_ident[EI_CLASS])
		{
			case ELFCLASSNONE:
				printf("none\n");
				break;
			case ELFCLASS32:
				printf("ELF32\n");
				break;
			default:
				printf("<unknown: %x>\n", e_ident[ELFCLASS32]);
		}
}
/**
 *print_data - print the data of an elf header
 *@e_ident: parameter for array containing elf class
 *
 *Return: return 0.
 */
void print_data(unsigned char *e_ident)
{
	printf(" Data:    ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;

		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
	}
}
/**
 *print_ver - name to print elf header version
 *@s_ident: parameter pointing to elf version
 *
 *Return: return 0.
 */
void print_ver(unsigned char *e_ident)
{
	printf(" Version:    %d",
			e_ident[EI_VERSION]);
	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
/**
 *print_osabi - print the OS/ABI of elf header
 *@e_ident: pointing to array containig elf version.
 *
 *Return: return 0.
 */
void print_osabi(unsigned char *e_ident)
{
	printf(" OS/ABI:    ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");

			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("standalone Ap\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}
/**
 *print_abi - print the ABI version of elf header
 *@e_ident: pointer containing elf version
 *
 *Return: return 0.
 */
void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:     %d\n",
			e_ident[EI_ABIVERSION]);
}
/**
 *print_type - print the type of elf version
 *@e_type: pointer of elf type
 *@e_ident: pointer for an elf class
 *
 *Return: return 0.
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:      ");

	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocate file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Execute file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x\n", e_type);
	}
}
/**
 *print_entry - print entry point of elf header
 *@e_entry: adresses elf entry point
 *@e_ident: pointer to elf class
 *
 *Return: return 0.
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:     ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}
/**
 *close_elf - close an elf file
 *@elf: file discribing an elf file
 *Description: if file can't be close- exit with code 98.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}
/**
 *main - func to display the information contained in elf header of a file
 *@argc: parameter to count arguments received
 *@argv: parameter to hold the array of argument received
 *
 *Return: return 0 when succesfull
 *Description: exit with code 98 if the file is not an elf or the function fails.
 */
int main(int __attribute__ ((__unused__)) argc,  char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file%s\n", argv[1]);
				exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
	close_elf(0);
	dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
	exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
	free(header);
	close_elf(0);
	dprintf(STDERR_FILENO, "Error: %s : No such file\n", argv[1]);
	exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_ver(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(o);
	return (0);
}
