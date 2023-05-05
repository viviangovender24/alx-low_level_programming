#include "main.h"

/**
* flip_bits - counts number of bits to change
* @n: number 1
* @m: number 2
* Return: number bits to change
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	int pos;
	unsigned long int currentNum = 0;
	unsigned long int xor = n ^ m;
	unsigned long int check = 1;

	for (pos = 0; (unsigned int) pos < (sizeof(unsigned long int) * 8); pos++)
	{
		if (check == (xor & check))
		{
			currentNum++;
		}
		check <<= 1;
	}
	return (currentNum);
}
