#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: Pointer to pointer to head of the list
 * @n: Intiger to add
 * Return: Address of new element or NULL if fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr, *new;

	curr = NULL;
	if (*head)
		curr = (*head);
	while (curr && curr->next)
		curr = curr->next;
	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (curr)
	{
		new->prev = curr;
	curr->next = new;
	}
	else
		(*head) = new;
	return (new);
}
