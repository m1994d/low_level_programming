#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 * @key: given key
 * @size: size of table
 * Return: unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_index;

	hash_index = hash_djb2(key);
	hash_index = hash_index % size;
	return (hash_index);
}
