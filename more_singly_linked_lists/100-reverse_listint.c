#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: A double to the head node of the input list
 * Return: The pointer to the head of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{

	listint_t *previous = NULL;
	listint_t *current;

	if (*head == NULL || head == NULL)
		return (NULL);

	if ((*(head))->next == NULL)
		return (*head);

	while (*head != NULL)
	{
		current = (*head)->next;
		(*(head))->next = previous;
		previous = *head;
		*head = current;
	}
	*head = previous;
	return (*head);
}

