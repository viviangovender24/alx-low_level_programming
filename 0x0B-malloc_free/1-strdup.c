#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup - duplicate to new memory space location
* @str: char
* Return: 0
*/
char *_strdup(char *str)
{
	char *copy;

	if (str == NULL)
		return (NULL);

	int i = 0;

	while (str[i] != '\0')
		i++;

	copy = malloc(sizeof(char) * (i + 1));

	if (copy == NULL)
		return (NULL);

	int x = 0;

	for (x = 0; str[x]; x++)
	copy[x] = str[x];
	return (copy);
}
