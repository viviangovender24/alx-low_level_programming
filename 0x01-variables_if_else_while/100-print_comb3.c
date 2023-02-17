#include <stdio.h>
#include <ctype.h>

/**
 * main - prints two digits combinations
 *
 * Return: 0 succesful
 */
int main(void)
{
	int i, x;

	for (i = 0 ; i <= 8 ; i++)
	{
		for (x = i + 1 ; x <= 9 ; x++)
		{
			putchar(i + '0');
			putchar(x + '0');
		}

		if (i != 8 && x != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
