/**
 * main - Prints numbers
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	int c;

	c = '0';
	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
