#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: first pointer
 * @src: second pointer
 * @n: input pararmeter
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	if (!dest || !src)
		return ("error/n");

	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	return (dest);
}
