#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to list's head
 * @index: Index of required node
 * Return: Address of required node or NULL if node is not found
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int actual_idx = 0;

	while (head)
	{
		if (index == actual_idx)
			return (head);
		head = head->next;
		actual_idx++;
	}
	return (NULL);
}
