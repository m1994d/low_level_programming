/**
 * print_alphabet - prints lowercase alphabet
 * Return: 0
 */

#include "main.h"

void print_alphabet(void)
{
	int c;

	c = 97;
	while (c < 123)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
