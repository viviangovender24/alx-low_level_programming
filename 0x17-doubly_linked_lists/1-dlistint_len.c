#include "lists.h"

/**
 * dlistint_len - count node
 * @h: pointer to begin
 *
 * Return: number nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_node;

	for (num_node = 0; h != NULL; num_node++)
		h = h->next;
	return (num_node);
}
