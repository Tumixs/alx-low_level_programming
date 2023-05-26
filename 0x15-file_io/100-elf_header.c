/*
 * Prints sections of an elf header
 * Author: Asere Oluwatumise .S
 * File: 100-elf_header.c
 */
#include "main.h"
#include <stdarg.h>
#include <elf.h>
Elf64_Ehdr *readelf(int, char **);
void *alloc_mem(void);
int print_elf(Elf64_Ehdr *);
/*Failure handler */
void fail(char *);

/**
 * readelf - Retrieves sections of an elf file header to a buffer
 * @argc: number of elf files to read
 * @argv: array of elf file names
 *
 * Return: returns buffer of type Elf64_Ehdr(elf_header struct)
 */
Elf64_Ehdr *readelf(int argc, char **argv)
{
	int i, op;
	int elf_size = 32; /* Section of elf header needed in task is 32bytes*/
	Elf64_Ehdr *buffer = alloc_mem();

	for (i = 1; argc > 1; i++, --argc)
	{
		op = open(argv[i], O_RDONLY);
		if (op == -1)
		{
			dprintf(STDERR_FILENO, "Failed to open elf file\n");
			free(buffer);
			exit(98);
		}
		read(op, buffer, elf_size);
		if (close(op) == -1)
		{
			dprintf(STDERR_FILENO, "Failed to close Elf file %s\n", argv[i]);
			free(buffer);
			exit(98);
		}
	}
	return (buffer);
}
/**
 * print_elf - prints retrieved elf header to `stdout`
 * @header: buffer holding elf section retrieved(elf-header)
 *
 * Return: tbd
 */
int print_elf(Elf64_Ehdr *header)
{
	int i;

	printf("    Magic:    ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", header->e_ident[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}

	printf("    Class:    ");
	switch (header->e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("NONE\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	}

	printf("    Data:    ");
	switch (header->e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("None\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	}

	printf("    Version:    ");
	switch (header->e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf("1 (current)");
		break;
	default:
		printf("0 (Invalid version)");
		break;
	}

	printf("    OS/ABI    ");
	switch (header->e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
	}

	printf("    ABI Version:    %d\n", header->e_ident[EI_ABIVERSION]);

	printf("    Type:    ");
	switch (header->e_type)
	{
	case ET_REL:
		printf("REL (Relocatable File)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	case ET_NONE:
		printf("None\n");
	}

	printf("    Entry point address:    %0xlx", (unsigned int)header->e_entry);
	return (0);
}

/**
 * alloc_mem - allocates memory(1024 bytes)
 *
 * Note: Memory allocated defaults type void,
 * must typecast pointer before use.
 *
 * Return: returns a pointer to the allocated memory
 */
void *alloc_mem(void)
{
	void *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Failed to allocate memory\n");
		exit(98);
	}
	return (buf);
}

/**
 * main - program start
 * @argc: number of args
 * @argv: array of command line args
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	Elf64_Ehdr *header;

	if (argc < 2)
	{
		dprintf(STDERR_FILENO, "Invalid file\n");
		exit(98);
	}
	header = readelf(argc, argv);
	print_elf(header);

	return (0);
}
