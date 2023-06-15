#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node
 * @head: double pointer
 * @index: index at to del
 *
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	cur = *head;
	if (index == 0)
	{
		*head = cur->next;
		if (cur->next != NULL)
		{
			cur->next->prev = NULL;
		}
		free(cur);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (cur->next == NULL)
			return (-1);
		cur = cur->next;
	}
	cur->prev->next = cur->next;
	if (cur->next != NULL)
		cur->next->prev = cur->prev;
	free(cur);
	return (1);
}
