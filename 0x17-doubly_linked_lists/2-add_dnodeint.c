#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add a new node
 * @head: double pointer to beginning
 * @n: value to add
 *
 * Return: pointer to address new node, else NULL if fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_ad;

	if (head == NULL)
		return (NULL);
	new_ad = malloc(sizeof(dlistint_t));
	if (new_ad == NULL)
		return (NULL);
	new_ad->n = n;
	new_ad->prev = NULL;
	new_ad->next = *head;
	*head = new_ad;
	if (new_ad->next != NULL)
		(new_ad->next)->prev = new_ad;
	return (new_ad);
}
