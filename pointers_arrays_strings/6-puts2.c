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
 * puts2 - prints every other character of a string, starting
 * with the first character, followed by a new line.
 * @str: Pointer to string to print
 * Return: Always 0
 */

void puts2(char *str)
{
	int i;
	int j;

	i = _strlen(str) - 1;
	j = 0;
	while (j <= i)
	{
		if (j % 2 == 0)
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
