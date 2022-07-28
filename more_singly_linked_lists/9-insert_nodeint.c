#include "lists.h"
#include <stdio.h>

/**
 * add_node - Entry point
 * @node_to_set: current node
 * @n: value
 * @node: index
 * Return: Always 0 (Success)
 */
listint_t *add_node(listint_t **node_to_set, listint_t *node, int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = node;
	*node_to_set = new_node;

	return (*node_to_set);

}
/**
 * insert_node_at_index - Entry point
 * @node: current node
 * @n: value
 * @idx: value
 * @before: index
 * Return: Always 0 (Success)
 */
listint_t *insert_node_at_index(
	listint_t *node,
	listint_t *before,
	unsigned int idx,
	int n
)
{

	if (before == NULL)
		return (NULL);

	if (idx == 0)
		return (add_node(&before->next, node, n));

	return (insert_node_at_index(node->next, before->next, idx - 1, n));
}


/**
 * insert_nodeint_at_index - Entry point
 * @head: current node
 * @n: value
 * @idx: index
 * Return: Always 0 (Success)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (head == NULL)
		return (NULL);

	if (idx == 1)
		return (add_node(head, *head, n));

	if (*head == NULL)
		return (NULL);

	return (insert_node_at_index((*head)->next, *head, idx - 1, n));
}
