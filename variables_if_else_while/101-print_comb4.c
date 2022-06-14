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
	int numberMiddle;

		for (numberLeft = 48; numberLeft <= 57; numberLeft++)
		{
			for (numberMiddle = numberLeft + 1; numberMiddle <= 57; numberMiddle++)
			{

				for (numberRight = numberMiddle + 1; numberRight <= 57; numberRight++)
																			{
																				if (numberMiddle != numberRight)
																				{
	
																					putchar(numberLeft);
						putchar(numberMiddle);
						purchar(numberRight);													if (!(
							numberRight ==  57
							&& numberMiddle == 56
							&& numberLeft == 55
						))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
		putchar('\n');
		eturn (0);
}
