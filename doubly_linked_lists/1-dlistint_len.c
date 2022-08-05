#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to head node of list
 * Return: Lenght of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t lenght = 0;

	while (h)
	{
		lenght++;
		h = h->next;
	}
	return (lenght);
}
