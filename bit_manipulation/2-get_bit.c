#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to search in
 * @index: index, starting from 0 of the bit you want to get
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int ret;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	n = n >> index;
	ret = n & 1;
	return (ret);
}
