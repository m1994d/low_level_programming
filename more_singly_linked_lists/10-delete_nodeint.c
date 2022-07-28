#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - Entry point
 * @node: current node
 * @before: current node
 * @index: index
 * Return: Always 0 (Success)
 */
int delete_node_at_index(
	listint_t *node,
	listint_t *before,
	unsigned int index
)
{
	if (node == NULL)
		return (-1);
	if (index == 0)
	{
		before->next = node->next;
		free(node);
		return (1);
													}
	return (delete_node_at_index(node->next, before->next, index - 1));
}
/**
 * delete_nodeint_at_index - Entry point
 * @head: current node
 * @index: index
 * Return: Always 0 (Success)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *free_node;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		free_node = *head;
		*head = (*head)->next;
		free(free_node);
		return (1);
	}

	return (delete_node_at_index((*head)->next, *(head), index));
}
