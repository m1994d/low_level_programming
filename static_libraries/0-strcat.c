#include "main.h"

/**
 * _strcat - Function that concatenates two strings.
 * @dest: input parameter
 * @src: input parameter
 * Return: pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
