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
 * puts_half - prints half of a string, followed by a new line.
 * print the second half of the string.
 * If the number of characters is odd, the function should print the last n
 * characters of the string, where n = (length_of_the_string - 1) / 2
 * @str: Pointer to string to be printed
 * Return: Always 0
 */

void puts_half(char *str)
{
	int i;
	int n;
	int j;

	i = _strlen(str);
	if (i % 2 == 0)
	n = i / 2;
	else
	n = (i + 1) / 2;
	for (j = n; j < i; j++)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}
