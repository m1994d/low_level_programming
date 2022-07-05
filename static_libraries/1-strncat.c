#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * it will use at most n bytes.
 *
 * @dest: input parameter
 * @n: input parameter
 * @src: input parameter
 * Return: pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{

	int i = 0, j = 0;

	while (dest[i] != 0)
		i++;

	while (src[j] != 0 && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
