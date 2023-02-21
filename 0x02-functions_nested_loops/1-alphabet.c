#include "main.h"

/**
 * print_alphabet - print alphabets lowercase
 * Reurn: 0 always
 */
void print_alphabet(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		_putchar(low);
	}
	_putchar('\n');
}
