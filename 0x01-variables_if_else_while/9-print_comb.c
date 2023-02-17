#include <stdio.h>
#include <ctype.h>

/**
 * main - prints numbers, comma and space
 *
 * Return: 0 succesful
 */
int main(void)
{
	int i;

for (i = 0 ; i < 10 ; i++)
{
	putchar(i + '0');
	if (i != 9)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
