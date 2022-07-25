#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to head of the linked list
 * @str: String to add
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *copy;
	unsigned int len;
	list_t *ret;

	ret = (list_t *)malloc(sizeof(list_t));
	if (ret == NULL)
		return (NULL);
	len = strlen(str);
	copy = strdup(str);
	if (copy == NULL)
	{
		free(ret);
		return (NULL);
	}
	ret->str = copy;
	ret->len = len;
	ret->next = *head;
	*head = ret;
	return (ret);
}
