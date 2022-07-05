#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a
 * set of bytes.
 * @s: input string
 * @accept: string to look for ocurrence
 * Return: s or NULL.
 */

char *_strpbrk(char *s, char *accept)
{

	unsigned int i = 0, j = 0;

	while (*(s + i))
	{
		while (*(accept + j))
		{
			if (*(accept + j) == *(s + i))
				return (s + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
