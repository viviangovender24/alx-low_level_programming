#include "main.h"
/**
* set_bit - set a bit at a index to 1
* @n: pointer to number to change
* @index: index of bit to set to 1
* Return: 1 for complete, -1 for uncomplete
*/

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
	{
		return (-1);
	}

*n = ((1UL << index) | *n);
return (1);
}
