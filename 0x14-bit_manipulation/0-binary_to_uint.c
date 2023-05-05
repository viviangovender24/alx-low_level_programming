#include "main.h"
/**
* binary_to_uint - convert binary number to unsigned int
* @b: string with the binary number
* Return: converted number
*/

unsigned int binary_to_uint(const char *b)
{
	int pos;
	unsigned int decimalVal = 0;

	if (!b)
	{
		return (0);
	}

	for (pos  = 0; b[pos]; pos++)
	{
		if (b[pos] < '0' || b[pos] > '1')
		{
			return (0);
		}

		decimalVal = 2 * decimalVal + (b[pos] - '0');
	}
return (decimalVal);
}
