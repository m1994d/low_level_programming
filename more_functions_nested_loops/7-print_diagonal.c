#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: times \ will be printed.
 * Return: Always 0
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int lines;
		int spaces;
		int i;

		lines = 1;
		while (lines <= n)
		{
			spaces = lines - 1;
			for (i = 1; i <= spaces; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			lines++;
		}
																}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
