/**
 * main - Prints hex digits
 * Return: 0
 */
#include<stdio.h>

int main(void)

{
	char c;

	c = '0';
	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	c = 97;
	while (c < 103)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
