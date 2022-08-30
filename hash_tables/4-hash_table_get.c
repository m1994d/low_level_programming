#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: pointer to hashtable
 * @key: given key
 * Return: NULL or value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int i;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[i];
	while (temp != NULL)
	{
		if (!strcmp(temp->key, (char *) key))
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
