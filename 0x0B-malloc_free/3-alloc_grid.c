#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - nested loop to make grid
* @width: width input
* @height: height input
* Return: pointer to 2 dim. array
*/
int **alloc_grid(int width, int height)
{
int **dim2;
int x, y;
if (width <= 0 || height <= 0)
return (NULL);
dim2 = malloc(sizeof(int *) * height);
if (dim2 == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
dim2[x] = malloc(sizeof(int) * width);
if (dim2[x] == NULL)
{
for (; x >= 0; x--)
free(dim2[x]);
free(dim2);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
dim2[x][y] = 0;
}
return (dim2);
}
