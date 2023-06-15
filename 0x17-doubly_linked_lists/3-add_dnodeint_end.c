#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a node
 * @head: double pointer to the beging
 * @n: integer value to add
 *
 * Return: pointer to address of new
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *adnew, *tmp;

	if (head == NULL)
		return (NULL);
	adnew = malloc(sizeof(dlistint_t));
	if (adnew == NULL)
		return (NULL);
	adnew->n = n;
	adnew->next = NULL;
	if (*head == NULL)
	{
		adnew->prev = NULL;
		*head = adnew;
		return (adnew);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = adnew;
	adnew->prev = tmp;
	return (adnew);
}
