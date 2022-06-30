#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: Pointer to area to fill
 * @n: Bytes to fill in area s
 * @b: Constant byte to fill s with
 * Return: Pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
