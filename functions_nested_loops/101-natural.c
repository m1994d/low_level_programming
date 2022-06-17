/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 * Return: Always 0
 */

#include <stdio.h>

int main(void)
{
	int sum, times;

	sum = 0;
	for (times = 1; times < 1024; times++)
	{
		if ((times % 3) == 0 || (times % 5) == 0)
		{
			sum = sum + times;
		}
	}
	printf("%d\n", sum);
	return (0);
}
