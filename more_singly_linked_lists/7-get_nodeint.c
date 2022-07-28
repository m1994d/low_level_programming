#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - Entry point
 * @head: current node
 * @index: index
 * Return: Always 0 (Success)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	return (get_nodeint_at_index(head->next, index - 1));
}
