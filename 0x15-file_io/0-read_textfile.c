#include "main.h"
#include <stdlib.h>
/**
* read_textfile- Read text file print to STDOUT
* @filename: text file
* @letters: number of letters to be read
* Return: nb- actual number of bytes read and printed
* 0 if filename is NULL or system fail.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t f, wrt, tmp;

	f = open(filename, O_RDONLY);

	if (f == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	tmp = read(f, buffer, letters);

	wrt = write(STDOUT_FILENO, buffer, tmp);
	free(buffer);
	close(f);
return (wrt);
}
