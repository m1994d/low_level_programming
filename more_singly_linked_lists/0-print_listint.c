#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 *@h: head node
 * Return: Always 0.
 */

size_t print_listint(const listint_t *h)
{

	size_t n_nodos = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodos++;
	}
	return (n_nodos);
}
