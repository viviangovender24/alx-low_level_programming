#include <stdio.h>
/**
 * main - C program that prints the size of various var types
 * Return:0
 */
int main(void)
{
char character;
int integer;
long int long_integer;
long long int long_long_integer;
float float_var;

printf("Size of a char: %1d byte(s)\n", sizeof(character));
printf("Size of an int: %1d byte(s)\n", sizeof(integer));
printf("Size of a long int: %1d byte(s)\n", sizeof(long_integer));
printf("Size of a long long int: %1d byte(s)\n", sizeof(long_long_integer));
printf("Size of a float: %1d byte(s)\n", sizeof(float_var));
return (0);
}
