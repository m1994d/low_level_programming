/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 * Return: 0
 */

#include "main.h"

void print_alphabet_x10(void)
{
	int c;
	int t;

	c = 97;
	t = 0;
	while (t < 10)
	{
		while (c < 123)
		{
			_putchar(c);
			c++;
		}
		c = 97;
		t++;
		_putchar('\n');
	}
}
