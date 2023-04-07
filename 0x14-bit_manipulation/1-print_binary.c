#include "main.h"
/**
* print_binary - print binary of a decimal
* @n: number to print (binary)
*/

void print_binary(unsigned long int n)
{

	int pos, count = 0;
	unsigned long int currentNum;

	for (pos = 63; pos >= 0; pos--)
	{
		currentNum = n >> pos;

		if (currentNum & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		_putchar('0');
	}

	if (!count)
	{
		_putchar('0');
	}
}
