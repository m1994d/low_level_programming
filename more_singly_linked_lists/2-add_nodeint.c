#include "lists.h"

/**
 * add_nodeint - function that prints all the elements of a listint_t list.
 * @head: head node
 * @n: number of a save in node
 * Return: number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current_new_node;

	if (head == NULL)
		return (NULL);

	current_new_node = malloc(sizeof(listint_t));
	if (current_new_node == NULL)
		return (NULL);

	current_new_node->n = n;
	current_new_node->next = *head;
	*head = current_new_node;
	return (*head);
}
