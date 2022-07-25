#include "lists.h"

/**
 * list_len - Number .
 * @h: pointer to list to print
 * Return: Number of members
 */

size_t list_len(const list_t *h)
{
	size_t ret;

	ret = 0;
	while (h != NULL)
	{
		ret += 1;
		h = h->next;
	}
	return (ret);
}
