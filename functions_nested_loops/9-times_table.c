#include "main.h"
#include <stdlib.h>

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
 * times_table - prints the 9 times table, starting with 0
 * Return: Always 0
 */

void times_table(void)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	while (a <= 9)
	{
		while (b <= 9)
		{
			c = a * b;
			if (c < 10)
			{
				_putchar(c + '0');
				if (b != 9 && ((b + 1) * a) < 10)
				{
					double_space_comma();
				}
				else if (b != 9 && ((b + 1) * a) >= 10)
				{
					single_space_comma();
				}
			}
			else
			{
				print_numbers(c);
				if (b != 9)
				{
					single_space_comma();
				}
			}
			b++;
		}
		_putchar('\n');
		b = 0;
		a++;
	}
}
