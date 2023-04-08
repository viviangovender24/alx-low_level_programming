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
	ssize_t f;
	ssize_t nb;
	ssize_t tmp;
fd = open(filename, O_RDONLY);
if (f == -1)
return (0);
buf = malloc(sizeof(char) * letters);
tmp = read(f, buffer, letters);
nb = write(STDOUT_FILENO, buf, tmp
free(buffer
close(f);
return (nb);
}
