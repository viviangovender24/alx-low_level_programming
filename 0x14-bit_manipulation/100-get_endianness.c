#include "main.h"
/**
* get_endianness - check  endian
* Return: 0 big, 1 for little
*/

int get_endianness(void)
{
	unsigned int p = 1;

char *ch = (char *) &p;
return (*ch);
}
