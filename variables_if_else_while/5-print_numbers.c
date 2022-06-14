/**
 * main - Prints digits
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	unsigned short d;

	d = 0;
	while (d < 10)
	{
		printf("%hu", d);
		d++;
	}
	putchar('\n');
	return (0);
}
