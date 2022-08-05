#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: Pointer to pointer of list's head
 * @idx: Index to insert new node
 * @n: int to insert
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr, *new;
	unsigned int actual_idx = 1;

	if (idx == 0)
		return (add_dnodeint(h, n));
	curr = (*h)->next;
	while (curr)
	{
		if (actual_idx == idx)
		{
			new = malloc(sizeof(*new));
			if (new == NULL)
				return (NULL);
			new->n = n;
			(curr->prev)->next = new;
			new->prev = curr->prev;
			curr->prev = new;
			new->next = curr;
			return (new);
		}
		curr = curr->next;
		actual_idx++;
	}
	if (idx == (actual_idx))
		return (add_dnodeint_end(h, n));
	return (NULL);
}
