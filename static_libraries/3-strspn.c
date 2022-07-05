#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a
 * prefix substring.
 * @s: input string
 * @accept: input string
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, count = 0;

	while (*(s + i))
	{
		while (*(accept + j))
		{
			if (*(accept + j) == *(s + i))
				count++;
			j++;
		}
		j = 0;
		i++;
		if (*(s + i) == ' ')
			break;
	}
	return (count);
}
