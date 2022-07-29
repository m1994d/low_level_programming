#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: List's head pointer
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast, *slow;

	fast = head;
	slow = head;
	while ((fast && slow && fast != slow) || (fast == slow && fast == head))
	{
		if (fast == NULL || slow == NULL)
			return (NULL);
		fast = (fast->next)->next;
		slow = slow->next;
		if (fast == head || slow == head)
			break;
	}
	slow = head;
	while (fast && slow && fast != slow)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (fast);
}
