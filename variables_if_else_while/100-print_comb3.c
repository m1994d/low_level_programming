#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numberRight;
	int numberLeft;
	int leftLimit = 48;

	for (numberLeft = 48; numberLeft <= 57; numberLeft++)
	{
		for (numberRight = leftLimit++; numberRight <= 57; numberRight++)
		{
			if (numberRight != numberLeft)
			{
				putchar(numberLeft);
				putchar(numberRight);
				if (!(numberRight ==  57 && numberLeft == 56))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
