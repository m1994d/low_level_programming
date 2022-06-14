/**
 * main - Prints lowercase alphabet in reverse
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	char c;

	c = 122;
	while (c > 96)
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
