#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: Pointer to string to measure
 * Return: Lenght of the string
 */

int _strlen(char *s)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (*(s + i) != '\0')
	{
		len = len + 1;
		i++;
	}
	return (len);
}

/**
 * rev_string - reverses a string.
 * @s: Pointer to string to reverse
 * Return: Always 0
 */

void rev_string(char *s)
{
	int i;
	int j;
	char c;

	i = _strlen(s) - 1;
	j = 0;
	while (i >= j)
	{
		c = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = c;
		i = i - 1;
		j++;
	}
}
