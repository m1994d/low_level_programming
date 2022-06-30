#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: Destination of copy
 * @src: Source of copy
 * @n: Bytes to copy from src to dest
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
