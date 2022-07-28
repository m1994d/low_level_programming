#include "lists.h"

/**
 * get_index_repeat - at prints a listint_t linked list
 * @tortoise: main
 * @hare: main
 * Return: the number of nodes in the list
 */
listint_t *get_index_repeat(listint_t *tortoise, listint_t *hare)
{
	if (hare == NULL || tortoise == NULL)
		return (NULL);

	if (tortoise == hare)
		return (hare);

	return (get_index_repeat(tortoise->next, hare->next->next));
}

/**
 * print_nodes - at prints a listint_t linked list
 * @node: main
 * @node_repeat: main
 * @repeat: main
 * Return: the number of nodes in the list
 */
size_t print_nodes(listint_t *node, listint_t *node_repeat, int repeat)
{

	if (node == NULL)
		return (0);
	if (node_repeat == node)
		repeat -= 1;
	if (repeat)
		printf("[%p]  %d", (void *)node, node->n);
	else
	{
		printf("-> [%p]  %d", (void *)node, node->n);
		return (0);
	}
	return (1 + print_nodes(node->next, node_repeat, repeat));
}

/**
 * print_listint_safe - at prints a listint_t linked list
 * @head: main
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *node_repeat;

	if (head == NULL)
		return (0);

	node_repeat = get_index_repeat(((listint_t *)head)->next, ((listint_t *)head)->next->next);

	return (print_nodes(
		(listint_t *)head,
		node_repeat,
		2
	));
}
