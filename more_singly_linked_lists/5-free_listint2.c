#include "lists.h"

/**
 * free_listint2 - Entry point
 * @head: current node
 * Return: Always 0 (Success)
 */
void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return;

	free_listint2(&(*head)->next);
	free(*head);
	*head = NULL;
}
