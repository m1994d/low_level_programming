#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head of listint_t list
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int nodes;

	nodes = 0;
	while (h && h->next != NULL)
	{
		printf("%d\n", h->n);
		nodes += 1;
		h = h->next;
	}
	if (h)
	{
		printf("%d\n", h->n);
		nodes += 1;
	}
	return (nodes);
}
