#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times,  alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int newline = 0;
	char i;

	while (newline <= 9)
	{
		for (i = 'a'; i  <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		newline++;
	}
}
