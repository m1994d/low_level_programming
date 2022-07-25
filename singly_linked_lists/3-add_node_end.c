#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to head pointer of list_t
 * @str: String to add
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *aux, *ret;
	char *copy;

	copy = strdup(str);
	if (copy == NULL)
		return (NULL);
	aux = *head;
	while (aux && aux->next)
		aux = aux->next;
	ret = (list_t *)malloc(sizeof(list_t));
	if (ret == NULL)
		return (NULL);
	if (aux == NULL)
	{
		aux = ret;
		*head = ret;
	}
	aux->next = ret;
	ret->len = strlen(str);
	ret->str = copy;
	ret->next = NULL;
	return (ret);
}
