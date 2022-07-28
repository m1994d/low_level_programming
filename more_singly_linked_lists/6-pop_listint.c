#include "lists.h"
/**
 * pop_listint - Entry point
 * @head: head of a linkend list
 * Return: Always 0 (Success)
 */
int pop_listint(listint_t **head)
{
	listint_t *head_to_revove;
	int value_of_head;

	if (head == NULL || *head == NULL)
		return (0);

	value_of_head = (*head)->n;
	head_to_revove = *head;
	*head = (*head)->next;

	free(head_to_revove);
	return (value_of_head);
}
