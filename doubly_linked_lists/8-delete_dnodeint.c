#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at
 * index of a dlistint_t linked list.
 * @head: Pointer to pointer to list's head
 * @index: Index to node to delete
 * Return: 1 on succeed, -1 on fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int actual_idx = 0;

	curr = *head;
	while (curr)
	{
		if (index == actual_idx && index > 0)
		{
			if (curr->next)
				(curr->next)->prev = curr->prev;
			(curr->prev)->next = curr->next;
			free(curr);
			return (1);
		}
		if (index == 0)
		{
			if (curr && curr->next)
			{
				*head = curr->next;
				(curr->next)->prev = NULL;
				free(curr);
			}
			else
			{
				*head = NULL;
				free(curr);
			}
			return (1);
		}
		curr = curr->next;
		actual_idx++;
	}
	return (-1);
}
