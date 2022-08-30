#include "hash_tables.h"

/**
 * free_list - frees a hash_node_t list.
 * @head: pointer to head of linked list
 */

void free_list(hash_node_t *head)
{
	if (head && head->next)
		free_list(head->next);
	if (head && head->value)
		free(head->value);
	if (head && head->key)
		free(head->key);
	if (head)
		free(head);
}

/**
 * hash_table_delete - deletes a hash table.
 * @ht: Hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *actual_node;

	if (ht && ht->array)
	{
		while (i < ht->size)
		{
			actual_node = (ht->array)[i];
			free_list(actual_node);
			i++;
		}
		free(ht->array);
		free(ht);
	}
}
