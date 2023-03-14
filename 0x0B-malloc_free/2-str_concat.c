#include "main.h"
#include <stdlib.h>
/**
* str_concat - get ends of input and add together for size
* @s1: input one to concat
* @s2: input two to concat
* Return: concat of s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
char *join;
int i, x;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = x  = 0;
while (s1[i] != '\0')
i++;
while (s2[x] != '\0')
x++;

join = malloc(sizeof(char) * (i + x + 1));
if (join == NULL)
return (NULL);
i = x = 0;
while (s1[i] != '\0')
{
join[i] = s1[i];
i++;
}
while (s2[x] != '\0')
{
join[i] = s2[x];
i++, x++;
}
join[i] = '\0';
return (join);
}
