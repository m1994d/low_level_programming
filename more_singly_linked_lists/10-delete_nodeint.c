#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at
 * index of a listint_t linked list.
 * @head: Pointer to list's head pointer
 * @index: Index of node that should be deleted
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int position;
	listint_t *aux, *tmp;

	position = 0;
	aux = *head;
	if (index == 0 && aux)
	{
		aux = (*head)->next;
		free((*head));
		(*head) = aux;
		return (1);
	}
	while (aux && aux->next)
	{
		if ((position + 1) == index)
		{
			tmp = (aux->next)->next;
			free(aux->next);
			aux->next = tmp;
			return (1);
		}
		aux = aux->next;
		position += 1;
	}
	return (-1);
}
