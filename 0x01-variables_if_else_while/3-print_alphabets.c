#include <stdio.h>
#include <ctype.h>

/**
 * main - prints the lower case of the alphabet
 *
 * Return: 0 succesful
 */
int main(void)
{
char i;
for (i = 'a' ; i <= 'z' ; i++)
{
putchar(i);
}
for (i = 'a' ; i <= 'z' ; i++)
{
putchar(toupper(i));
}
putchar('\n');
return (0);
}
