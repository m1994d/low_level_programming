#include "lists.h"
#define SIZE_CURRRENT_NODE 1

/**
 * listint_len - function that prints all the elements of a listint_t list.
 * @h: current node
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);

	return (SIZE_CURRRENT_NODE + listint_len(h->next));
}
