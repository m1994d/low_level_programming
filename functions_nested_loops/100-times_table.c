#include "main.h"
#include <stdlib.h>

/**
 * triple_space_comma - prints a comma followed by three spaces
 * Return: Always 0
 */

void triple_space_comma(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
}

/**
 * double_space_comma - prints a comma followed by two spaces
 * Return: Always 0
 */

void double_space_comma(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
}

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
 * print_times_table - prints the 9 times table, starting with 0
 * @n: Last table to be printed
 * Return: Always 0
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int a, b, c;

		a = b = 0;
		while (a <= n)
		{
			while (b <= n)
			{
				c = a * b;
				if (c < 10)
				{
					_putchar(c + '0');
					if (b != n && ((b + 1) * a) < 10)
						triple_space_comma();
					else if (b != n && ((b + 1) * a) >= 10)
						double_space_comma();
				}
				else if (c < 100)
				{
					print_numbers(c);
					if (b != n && ((b + 1) * a) < 100)
						double_space_comma();
					else if (b != n)
						single_space_comma();
				}
				else if (b != n)
				{
					print_numbers(c);
					single_space_comma();
				}
				else
					print_numbers(c);
				b++;
			}
			_putchar('\n');
			b = 0;
			a++;
		}
	}
}
