#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print all elements
 * @h: pointer to start header of linked list
 *
 * Return: number
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_node;

	for (num_node = 0; h != NULL; num_node++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num_node);
}
