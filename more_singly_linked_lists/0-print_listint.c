#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: current node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	return (1 + print_listint(h->next));
}
