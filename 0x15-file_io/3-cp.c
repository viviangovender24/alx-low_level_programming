#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_buf - Allocates 1024 bytes for a buffer.
* @fil: file buffer is storing chars
* Return: the newly-allocated buffer.
*/
char *create_buf(char *fil)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fil);
		exit(99);
	}

	return (buff);
}

/**
* close_fil - Closes file descriptors.
* @f: The file descriptor to be closed.
*/
void close_fil(int f)
{
	int cn;

	cn = close(f);
	if (cn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
}

/**
* main - Copies contents file
* @argSup: arguments supplied to the program.
* @argPo:array of pointers to the argument
* Return: 0 on success
*/
int main(int argSup, char *argPo[])
{

	int frm, too, rea, wrt;
	char *buffer;

	if (argSup != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argPo[2]);
	frm = open(argPo[1], O_RDONLY);
	rea = read(frm, buffer, 1024);
	too = open(argPo[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (rea > 0)
	{
		if (frm == -1 || rea == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argPo[1]);
			free(buffer);
			exit(98);
		}

		wrt = write(too, buffer, rea);
		if (too == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argPo[2]);
			free(buffer);
			exit(99);
		}
		rea = read(frm, buffer, 1024);
		too = open(argPo[2], O_WRONLY | O_APPEND);
	}

free(buffer);
close_file(frm);
close_file(too);
return (0);
}

char *create_buf(char *fil);
void close_fil(int f);
