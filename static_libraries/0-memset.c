#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: first bytes
 *
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	if (!s)
		return ("error /n");

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (s);
}
