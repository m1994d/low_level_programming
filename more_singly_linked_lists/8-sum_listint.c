#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - Entry point
 * @head: current node
 * Return: Always 0 (Success)
 */
int sum_listint(listint_t *head)
{
	return ((head == NULL) ? 0 : head->n + sum_listint(head->next));
}
