#include "main.h"
/**
* get_bit - value of a bit at a index in decimal number
* @n: number to search
* @index: index of the bit
* Return: value of the bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bitValue;

	if (index > 63)
	{
		return (-1);
	}

bitValue = (n >> index) & 1;
return (bitValue);
}
