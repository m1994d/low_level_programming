#include "lists.h"

/**
 * distance_nodes - Calcs the distance between two nodes
 * @n1: Pointer to node 1
 * @n2: Pointer to node 2
 * Return: Distance from node 1 to node 2
 */

unsigned int distance_nodes(const listint_t *n1, const listint_t *n2)
{
	unsigned int distance;
	const listint_t *aux;

	distance = 0;
	aux = n1;
	while (aux && aux != n2)
	{
		distance += 1;
		aux = aux->next;
	}
	return (distance);
}

/**
 * print_listint_safe - that prints a listint_t linked list.
 * Can print lists with a loop.
 * @head: List's head pointer
 * Return: Number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	unsigned int position, distance;
	const listint_t *aux;

	aux = head;
	position = 0;
	while (aux && aux->next)
	{
		distance = distance_nodes(head, aux);
		if (position > distance)
		{
			printf("-> [%p] %d\n", (void *)aux, aux->n);
			return (position);
		}
		printf("[%p] %d\n", (void *)aux, aux->n);
		position += 1;
		aux = aux->next;
	}
	if (aux)
	{
		printf("[%p] %d\n", (void *)aux, aux->n);
		position += 1;
		return (position);
	}
	return (position);
}
