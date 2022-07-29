#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: Pointer to head pointer of the list
 */

void free_listint2(listint_t **head)
{
	if (head && (*head) && (*head)->next)
		free_listint2(&((*head)->next));
	if (head && (*head))
	{
		free((*head));
		(*head) = NULL;
	}
}

/**
 * distance_nodes2 - Calcs the distance between two nodes
 * @n1: Pointer to node 1
 * @n2: Pointer to node 2
 * Return: Distance from node 1 to node 2
 */

unsigned int distance_nodes2(listint_t *n1, listint_t *n2)
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
 * free_listint_safe - frees a listint_t linked list.
 * Can free lists with a loop.
 * @head: List's head pointer
 * Return: Number of nodes
 */

size_t free_listint_safe(listint_t **head)
{
	unsigned int position, distance;
	listint_t *aux;

	aux = NULL;
	if (head)
		aux = *head;
	position = 0;
	while (aux && aux->next)
	{
		distance = distance_nodes2(*head, aux->next);
		if (position > distance || aux == aux->next)
		{
			aux->next = NULL;
			break;
		}
		aux = aux->next;
		position += 1;
	}
	if (aux)
		position += 1;
	free_listint2(head);
	return (position);
}
