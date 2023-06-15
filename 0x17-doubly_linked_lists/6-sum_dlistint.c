#include "lists.h"

/**
 * sum_dlistint - sums all data
 * @head: pointer to begin
 *
 * Return: sum of all data, else 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sumall = 0;

	while (head != NULL)
	{
		sumall += head->n;
		head = head->next;
	}
	return (sumall);
}
