/**
 * main - Prints digits separated by commas
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c = c + 1)
	{
		putchar(c);
		if (c < '9')
		{

			putchar(',');
																		putchar(' ');
																	}
	}
	putchar('\n');
	return (0);
}
