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
 * print_rev - reverses a string.
 * @s: Pointer to string to reverse
 * Return: Always 0
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s) - 1;
	for (; i >= 0; i = i - 1)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
