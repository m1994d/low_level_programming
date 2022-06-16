#include "main.h"
#include <stdlib.h>

/**
 * single_space_comma - prints a comma followed by an space
 * Return: Always 0
 */

void single_space_comma(void)
{
	_putchar(',');
	_putchar(' ');
}

/**
 *print_numbers - prints number n (from -999 to 999)
 *@n: number to print
 *return: always 0
 */

void print_numbers(int n)
{
	if (n < 0)
	{
		_putchar('-');
	}
	if (n >= 100 || n <= -100)
	{
		int a;
		int b;
		int c;

		a = abs(n) / 100;
		b = (abs(n) % 100) / 10;
		c = abs(n) % 10;
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(c + '0');
	}
	else if (n >= 10 || n <= -10)
	{
		int a;
		int b;

		a = abs(n) / 10;
		b = abs(n) % 10;
		_putchar(a + '0');
		_putchar(b + '0');
																	}
	else
	{
		_putchar(abs(n) + '0');
	}
}

/**
 * print_to_98 - prints numbers from n to 98
 * @n: begining of the printing
 * Return: Always 0
 */

void print_to_98(int n)
{
	for (; n < 98; n++)
	{
		print_numbers(n);
		single_space_comma();
	}
	for (; n > 98; n--)
	{
		print_numbers(n);
		single_space_comma();
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
