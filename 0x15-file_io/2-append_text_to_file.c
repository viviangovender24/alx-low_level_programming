#include "main.h"
/**
* append_text_to_file - Appends text at the end of file.
* @filename: name of the file.
* @text_content:string to add to the end of the file.
* Return: If the function fails or filename is NULL - -1.
* If the file does not exist the user lacks write permissions - -1.
* Otherwise - 1.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int f, wrt, lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent];)
		lent++;

	}

	f = open(filename, O_WRONLY | O_APPEND);
	wrt = write(f, text_content, lent);

	if (f == -1 || wrt == -1)
	return (-1);
	close(f);
	return (1);
}
