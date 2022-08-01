#include "main.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: Pointer to intiger to change
 * @index: index, starting from 0 of the bit to be set
 * Return: 1 on success, -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	(*n) = (*n) | (1 << index);
		return (1);
}
