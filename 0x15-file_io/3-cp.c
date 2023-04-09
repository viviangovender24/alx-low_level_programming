#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

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

char *create_buf(char *fil);
void close_fil(int f);
