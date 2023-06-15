#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node
 * @head: head
 * @index: to locate.
 *
 * Return: If the node does not exist - NULL.
 *         else address
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
