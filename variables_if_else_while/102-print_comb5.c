#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numberLeft;
	int numberLast;

	for (numberLeft = 0; numberLeft < 100; numberLeft++)
	{
		for (numberLast = 0; numberLast < 100; numberLast++)
		{
			if (numberLeft < numberLast)
			{
				putchar(numberLeft / 10 + 48);
				putchar(numberLeft % 10 + 48);
				putchar(32);
				putchar(numberLast / 10 + 48);
				putchar(numberLast % 10 + 48);
				if (numberLeft < 98)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
