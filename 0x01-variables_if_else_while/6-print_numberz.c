#include <stdio.h>
#include <ctype.h>

/**
 * main - prints the lower case of the alphabet
 *
 * Return: 0 succesful
 */
int main(void)
{
int i;
for (i = 0 ; i < 10 ; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
