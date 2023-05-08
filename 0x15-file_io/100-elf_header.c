#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_e(unsigned char *e_id);
void print_magic(unsigned char *e_id);
void print_class(unsigned char *e_id);
void print_data(unsigned char *e_id);
void print_version(unsigned char *e_id);
void close_e(int e);

/**
 * check_e - Checks if a file is an ELF file.
 * @e_id: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_e(unsigned char *e_id)
{
	int ind;

	for (ind = 0; ind < 4; ind++)
	{
		if (e_id[ind] != 127 &&
		    e_id[ind] != 'E' &&
		    e_id[ind] != 'L' &&
		    e_id[ind] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - Prints the magic numbers of an ELF header.
 * @e_id: pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void print_magic(unsigned char *e_id)
{
	int ind;

	printf("  Magic:   ");

	for (ind = 0; ind < EI_NIDENT; ind++)
	{
		printf("%02x", e_id[ind]);

		if (ind == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - Prints the class of an ELF header.
 * @e_id: A pointer to an array containing the ELF class.
 */
void print_class(unsigned char *e_id)
{
	printf("  Class:                             ");

	switch (e_id[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_id[EI_CLASS]);
	}
}

/**
 * print_data - Prints the data of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_data(unsigned char *e_id)
{
	printf("  data print:                              ");

	switch (e_id[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_id[EI_CLASS]);
	}
}

/**
 * print_version - Prints the version of an ELF header.
 * @e_id: A pointer to an array containing the ELF version.
 */
void print_version(unsigned char *e_id)
{
	printf("  Version:                           %d",
	       e_id[EI_VERSION]);

	switch (e_id[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}


void close_e(int e)
{
	if (close(e) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", e);
		exit(98);
	}
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 *              the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_e(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_e(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_e(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);

	free(header);
	close_e(o);
	return (0);
}
