#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: pointer to hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, c = 0;

	if (ht == NULL)
		return;
	printf("{");

	for (i = 0; i <= ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i])
			{
				if (c != 0)
					printf(", ");
				c++;
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				ht->array[i] = ht->array[i]->next;
			}
		}
	}
	printf("}\n");
}
