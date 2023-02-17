#include <stdio.h>
#include <ctype.h>

/**
 * main - prints two digits combinations
 *
 * Return: 0 succesful
 */
int main(void)
{
	int i, x, z;

	for (i = 0 ; i <= 7 ; i++)
	{
		for (x = i + 1 ; x <= 8 ; x++)
		{
			for (z = x + 1 ; z <= 9 ; z++)
			{
				putchar(i + '0');
				putchar(x + '0');
				putchar(z + '0');

				if (i == 7 && x == 8 && z == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
