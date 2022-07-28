#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: Pointer to list's head pointer
 * @idx: index of the list where the new node should be added
 * @n: intiger to add
 * Return: Address of new node, or NULL in fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int position;
	listint_t *aux, *ret;

	position = 0;
	if (head)
		aux = *head;
	ret = (listint_t *)malloc(sizeof(listint_t));
	if (ret == NULL)
		return (NULL);
	ret->n = n;
	while (aux && aux->next)
	{
		if (idx == 0)
		{
			ret->next = aux;
			(*head) = ret;
			return (ret);
		}
		else if ((position + 1) == idx)
		{
			ret->next = aux->next;
			aux->next = ret;
			return (ret);
		}
		position += 1;
		aux = aux->next;
	}
	if (head && aux == NULL && idx == 0)
	{
		ret->next = NULL;
		(*head) = ret;
		return (ret);
	}
	else if ((position + 1) == idx)
	{
		aux->next = ret;
		ret->next = NULL;
		return (ret);
	}
	return (NULL);
}
