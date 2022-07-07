#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array -  creates an array of chars, and
 * initializes it with a specific char.
 * @size: Array's size
 * @c: Character used to initialize the array
 * Return: Pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(size);
	if (size == 0 || ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
