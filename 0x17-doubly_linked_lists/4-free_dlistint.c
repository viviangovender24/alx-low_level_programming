#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free
 * @head: pointer tohead
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *nxt;

	while (head != NULL)
	{
		nxt = head->next;
		free(head);
		head = nxt;
	}
}
