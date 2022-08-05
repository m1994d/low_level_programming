#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to pointer of head node of the list
 * @n: Intiger to add
 * Return: The address of the new node, or NULL on fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	if (head && *head)
	{
		(*head)->prev = new;
		new->next = (*head);
	}
	else
		new->next = NULL;
	(*head) = new;
	return (new);
}
