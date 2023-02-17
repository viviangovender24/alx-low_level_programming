#include <stdio.h>
#include <ctype.h>

/**
 * main - prints with puts the lower case of the alphabet in reverse
 *
 * Return: 0 succesful
 */
int main(void)
{
char i;

for (i = 'z' ; i >= 'a' ; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
