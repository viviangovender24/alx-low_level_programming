#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - prints each array elem on a newl
* @array: array
* @size: how many elem to print
* @action: pointer to print in regular or hex
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int ii;
if (array == NULL || action == NULL)
return;

	for (ii = 0; ii < size; ii++)
	{
		action(array[ii]);
	}
}
