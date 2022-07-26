#include "lists.h"
#include <stdio.h>
/**
 * create_node - create a nodecreate a node
 * @n: add number
 * Return: new node
 */
listint_t *create_node(const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}
/**
 * add_nodeint_end - Entry point
 * @head: current node
 * @n: date number to add
 * Return: Always 0 (Success)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	if (head == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = create_node(n);
		return (*head);
	}
	if ((*head)->next == NULL)
	{
		(*head)->next = create_node(n);
		return ((*head)->next);
	}

	return (add_nodeint_end(&(*head)->next, n));
}
