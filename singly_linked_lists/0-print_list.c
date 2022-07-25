#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to list to print
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t ret;

	ret = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			ret += 1;
			continue;
		}
		printf("[%i] %s\n", h->len, h->str);
		ret += 1;
		h = h->next;
	}
	return (ret);
}
